/****************************************************************************
**
** Copyright (C) 2006-2008 Trolltech ASA. All rights reserved.
**
** This file is part of the QtXMLPatterns module of the Qt Toolkit.
**
** This file may be used under the terms of the GNU General Public
** License versions 2.0 or 3.0 as published by the Free Software
** Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file.  Alternatively you may (at
** your option) use any later version of the GNU General Public
** License if such license has been publicly approved by Trolltech ASA
** (or its successors, if any) and the KDE Free Qt Foundation. In
** addition, as a special exception, Trolltech gives you certain
** additional rights. These rights are described in the Trolltech GPL
** Exception version 1.2, which can be found at
** http://www.trolltech.com/products/qt/gplexception/ and in the file
** GPL_EXCEPTION.txt in this package.
**
** Please review the following information to ensure GNU General
** Public Licensing requirements will be met:
** http://trolltech.com/products/qt/licenses/licensing/opensource/. If
** you are unsure which license is appropriate for your use, please
** review the following information:
** http://trolltech.com/products/qt/licenses/licensing/licensingoverview
** or contact the sales department at sales@trolltech.com.
**
** In addition, as a special exception, Trolltech, as the sole
** copyright holder for Qt Designer, grants users of the Qt/Eclipse
** Integration plug-in the right for the Qt/Eclipse Integration to
** link to functionality provided by Qt Designer and its related
** libraries.
**
** This file is provided "AS IS" with NO WARRANTY OF ANY KIND,
** INCLUDING THE WARRANTIES OF DESIGN, MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE. Trolltech reserves all rights not expressly
** granted herein.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

/**
 * @file qcomparingaggregator.cpp
 * @short This file is included by qcomparingaggregator_p.h.
 * If you need includes in this file, put them in qcomparingaggregator_p.h, outside of the namespace.
 */

template <AtomicComparator::Operator oper, AtomicComparator::ComparisonResult result>
inline Item
ComparingAggregator<oper, result>::applyNumericPromotion(const Item &old,
                                                         const Item &nev,
                                                         const Item &newVal) const
{
    Q_ASSERT(old);
    Q_ASSERT(nev);
    Q_ASSERT(newVal);
    const ItemType::Ptr to(old.type());
    const ItemType::Ptr tn(nev.type());

    if(!(BuiltinTypes::numeric->xdtTypeMatches(to) && BuiltinTypes::numeric->xdtTypeMatches(tn)))
        return newVal; /* At least one of them isn't numeric. */
    else if(BuiltinTypes::xsDouble->xdtTypeMatches(to) || BuiltinTypes::xsDouble->xdtTypeMatches(tn))
        return toItem(Double::fromValue(newVal.as<Numeric>()->toDouble()));
    else if(BuiltinTypes::xsFloat->xdtTypeMatches(to) || BuiltinTypes::xsFloat->xdtTypeMatches(tn))
        return toItem(Float::fromValue(newVal.as<Numeric>()->toDouble()));
    else if(BuiltinTypes::xsInteger->xdtTypeMatches(to) &&
            BuiltinTypes::xsInteger->xdtTypeMatches(tn))
        return newVal; /* Both must be xs:integer. */
    else
        return toItem(Decimal::fromValue(newVal.as<Numeric>()->toDecimal()));
}

template <AtomicComparator::Operator oper, AtomicComparator::ComparisonResult result>
Item
ComparingAggregator<oper, result>::evaluateSingleton(const DynamicContext::Ptr &context) const
{
    const Item::Iterator::Ptr it(m_operands.first()->evaluateSequence(context));
    Item largest;

    while(true)
    {
        Item next(it->next());

        if(!next)
        {
            return largest;
        }

        AtomicComparator::Ptr comp(comparator());

        if(!comp)
        {
            ItemType::Ptr t1(next.type());
            Q_ASSERT(t1);

            if(BuiltinTypes::xsUntypedAtomic->xdtTypeMatches(t1))
            {
                next = cast(next, context);
                t1 = BuiltinTypes::xsDouble;
            }

            if(!largest)
            {
                largest = next;
                continue;
            }

            Q_ASSERT(largest);
            comp = fetchComparator(largest.type(), t1, context);
            Q_ASSERT(comp);
        }
        else if(!largest)
        {
            largest = next;
            continue;
        }

        if(comp->compare(next, operatorID(), largest) == result)
        {
            largest = applyNumericPromotion(largest, next, next);
            continue;
        }

        const ItemType::Ptr t(next.type());

        if(BuiltinTypes::xsDouble->xdtTypeMatches(t) &&
           next.as<Numeric>()->isNaN())
        {
            return CommonValues::DoubleNaN;
        }
        else if(BuiltinTypes::xsFloat->xdtTypeMatches(t) &&
                next.as<Numeric>()->isNaN())
        {
            if(BuiltinTypes::xsDouble->xdtTypeMatches(largest.type()))
                return CommonValues::DoubleNaN;

            /* If we have a xs:double somewhere, we must promote the NaN value to xs:double,
             * and we really should raise error on invalid value. */
            largest = it->next();

            while(largest)
            {
                const ItemType::Ptr tf(largest.type());
                if(BuiltinTypes::xsDouble->xdtTypeMatches(tf))
                    return CommonValues::DoubleNaN;
                else if(BuiltinTypes::xsUntypedAtomic->xdtTypeMatches(tf))
                {
                    /* Attempt a convert, which will raise an error if it doesn't work out. */
                    cast(largest, context);
                    return CommonValues::DoubleNaN;
                }
                else if(!BuiltinTypes::numeric->xdtTypeMatches(tf))
                {
                    fetchComparator(BuiltinTypes::xsFloat, tf, context);
                }
                else
                    largest = it->next();
            };

            return CommonValues::FloatNaN;
        }
        else
            largest = applyNumericPromotion(largest, next, largest);
    }
}

template <AtomicComparator::Operator oper, AtomicComparator::ComparisonResult result>
Expression::Ptr
ComparingAggregator<oper, result>::typeCheck(const StaticContext::Ptr &context,
                                             const SequenceType::Ptr &reqType)
{
    Q_ASSERT(oper == AtomicComparator::OperatorGreaterThan ||
             oper == AtomicComparator::OperatorLessThan);
    const Expression::Ptr me(FunctionCall::typeCheck(context, reqType));

    ItemType::Ptr t1(m_operands.first()->staticType()->itemType());

    if(*CommonSequenceTypes::Empty == *t1)
        return EmptySequence::create(this, context);
    else if(*BuiltinTypes::xsAnyAtomicType == *t1 ||
            BuiltinTypes::numeric->xdtTypeMatches(t1))
        return me;
    else if(BuiltinTypes::xsUntypedAtomic->xdtTypeMatches(t1))
    {
        m_operands.replace(0, Expression::Ptr(new UntypedAtomicConverter(m_operands.first(),
                           BuiltinTypes::xsDouble)));
        t1 = m_operands.first()->staticType()->itemType();
    }
    else if(!BuiltinTypes::xsString->xdtTypeMatches(t1) &&
            !BuiltinTypes::xsAnyURI->xdtTypeMatches(t1) &&
            !BuiltinTypes::xsDayTimeDuration->xdtTypeMatches(t1) &&
            !BuiltinTypes::xsDate->xdtTypeMatches(t1) &&
            !BuiltinTypes::xsTime->xdtTypeMatches(t1) &&
            !BuiltinTypes::xsDateTime->xdtTypeMatches(t1) &&
            !BuiltinTypes::xsYearMonthDuration->xdtTypeMatches(t1))
    {
        context->error(QtXmlPatterns::tr("The first argument to %1 cannot be of type %2.")
                          .arg(formatFunction(context->namePool(), signature()))
                          .arg(formatType(context->namePool(), m_operands.first()->staticType())),
                       ReportContext::FORG0006, this);
        return me;
    }

    if(!m_operands.first()->staticType()->cardinality().allowsMany())
        return m_operands.first();

    prepareComparison(fetchComparator(t1, t1, context));

    return me;
}

