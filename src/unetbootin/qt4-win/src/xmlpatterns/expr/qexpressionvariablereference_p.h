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

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.

#ifndef Patternist_ExpressionVariableReference_H
#define Patternist_ExpressionVariableReference_H

#include "qvariabledeclaration_p.h"
#include "qvariablereference_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QPatternist
{
    /**
     * @short A reference to a variable declared with <tt>declare variable</tt> or @c let.
     *
     * It's also used by variable bindings in @c case branches of the @c typeswitch
     * expression.
     *
     * This AST node is only used up until the typeCheck() stage. Therefore it
     * has no functions for evaluation, such as evaluateSequence().
     *
     * @author Frans Englich <fenglich@trolltech.com>
     * @ingroup Patternist_expressions
     */
    class ExpressionVariableReference : public VariableReference
    {
    public:
        ExpressionVariableReference(const VariableSlotID slot,
                                    const VariableDeclaration::Ptr &varDecl);

        virtual bool evaluateEBV(const DynamicContext::Ptr &context) const;
        virtual Item evaluateSingleton(const DynamicContext::Ptr &context) const;
        virtual Item::Iterator::Ptr evaluateSequence(const DynamicContext::Ptr &context) const;

        virtual Expression::Ptr typeCheck(const StaticContext::Ptr &context,
                                          const SequenceType::Ptr &reqType);
        virtual SequenceType::Ptr staticType() const;
        virtual ID id() const;
        virtual ExpressionVisitorResult::Ptr accept(const ExpressionVisitor::Ptr &visitor) const;

        inline const Expression::Ptr &sourceExpression() const;
        inline const VariableDeclaration::Ptr &variableDeclaration() const;
    private:
        const VariableDeclaration::Ptr m_varDecl;
    };

    inline const Expression::Ptr &ExpressionVariableReference::sourceExpression() const
    {
        return m_varDecl->expression();
    }

    inline const VariableDeclaration::Ptr &ExpressionVariableReference::variableDeclaration() const
    {
        return m_varDecl;
    }

}

QT_END_NAMESPACE

QT_END_HEADER

#endif
