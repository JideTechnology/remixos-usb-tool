/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"


#if ENABLE(SVG)

#include "SVGElement.h"
#include "JSSVGException.h"

#include <wtf/GetPtr.h>

#include "KURL.h"
#include "SVGException.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGException)

/* Hash table */

static const HashTableValue JSSVGExceptionTableValues[5] =
{
    { "code", DontDelete|ReadOnly, (intptr_t)jsSVGExceptionCode, (intptr_t)0 },
    { "name", DontDelete|ReadOnly, (intptr_t)jsSVGExceptionName, (intptr_t)0 },
    { "message", DontDelete|ReadOnly, (intptr_t)jsSVGExceptionMessage, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGExceptionConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGExceptionTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSSVGExceptionTableValues, 0 };
#else
    { 10, 7, JSSVGExceptionTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGExceptionConstructorTableValues[4] =
{
    { "SVG_WRONG_TYPE_ERR", DontDelete|ReadOnly, (intptr_t)jsSVGExceptionSVG_WRONG_TYPE_ERR, (intptr_t)0 },
    { "SVG_INVALID_VALUE_ERR", DontDelete|ReadOnly, (intptr_t)jsSVGExceptionSVG_INVALID_VALUE_ERR, (intptr_t)0 },
    { "SVG_MATRIX_NOT_INVERTABLE", DontDelete|ReadOnly, (intptr_t)jsSVGExceptionSVG_MATRIX_NOT_INVERTABLE, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGExceptionConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSSVGExceptionConstructorTableValues, 0 };
#else
    { 9, 7, JSSVGExceptionConstructorTableValues, 0 };
#endif

class JSSVGExceptionConstructor : public DOMObject {
public:
    JSSVGExceptionConstructor(ExecState* exec)
        : DOMObject(JSSVGExceptionConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSSVGExceptionPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSSVGExceptionConstructor::s_info = { "SVGExceptionConstructor", 0, &JSSVGExceptionConstructorTable, 0 };

bool JSSVGExceptionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGExceptionConstructor, DOMObject>(exec, &JSSVGExceptionConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGExceptionPrototypeTableValues[5] =
{
    { "SVG_WRONG_TYPE_ERR", DontDelete|ReadOnly, (intptr_t)jsSVGExceptionSVG_WRONG_TYPE_ERR, (intptr_t)0 },
    { "SVG_INVALID_VALUE_ERR", DontDelete|ReadOnly, (intptr_t)jsSVGExceptionSVG_INVALID_VALUE_ERR, (intptr_t)0 },
    { "SVG_MATRIX_NOT_INVERTABLE", DontDelete|ReadOnly, (intptr_t)jsSVGExceptionSVG_MATRIX_NOT_INVERTABLE, (intptr_t)0 },
    { "toString", DontDelete|DontEnum|Function, (intptr_t)jsSVGExceptionPrototypeFunctionToString, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGExceptionPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSSVGExceptionPrototypeTableValues, 0 };
#else
    { 9, 7, JSSVGExceptionPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGExceptionPrototype::s_info = { "SVGExceptionPrototype", 0, &JSSVGExceptionPrototypeTable, 0 };

JSObject* JSSVGExceptionPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSSVGException>(exec);
}

bool JSSVGExceptionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGExceptionPrototype, JSObject>(exec, &JSSVGExceptionPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGException::s_info = { "SVGException", 0, &JSSVGExceptionTable, 0 };

JSSVGException::JSSVGException(PassRefPtr<Structure> structure, PassRefPtr<SVGException> impl, SVGElement* context)
    : DOMObject(structure)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGException::~JSSVGException()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());

}

JSObject* JSSVGException::createPrototype(ExecState* exec)
{
    return new (exec) JSSVGExceptionPrototype(JSSVGExceptionPrototype::createStructure(exec->lexicalGlobalObject()->objectPrototype()));
}

bool JSSVGException::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGException, Base>(exec, &JSSVGExceptionTable, this, propertyName, slot);
}

JSValuePtr jsSVGExceptionCode(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGException* imp = static_cast<SVGException*>(static_cast<JSSVGException*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->code());
}

JSValuePtr jsSVGExceptionName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGException* imp = static_cast<SVGException*>(static_cast<JSSVGException*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->name());
}

JSValuePtr jsSVGExceptionMessage(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGException* imp = static_cast<SVGException*>(static_cast<JSSVGException*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->message());
}

JSValuePtr jsSVGExceptionConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSSVGException*>(asObject(slot.slotBase()))->getConstructor(exec);
}
JSValuePtr JSSVGException::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSSVGExceptionConstructor>(exec);
}

JSValuePtr jsSVGExceptionPrototypeFunctionToString(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGException::s_info))
        return throwError(exec, TypeError);
    JSSVGException* castedThisObj = static_cast<JSSVGException*>(asObject(thisValue));
    SVGException* imp = static_cast<SVGException*>(castedThisObj->impl());


    JSC::JSValuePtr result = jsString(exec, imp->toString());
    return result;
}

// Constant getters

JSValuePtr jsSVGExceptionSVG_WRONG_TYPE_ERR(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValuePtr jsSVGExceptionSVG_INVALID_VALUE_ERR(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValuePtr jsSVGExceptionSVG_MATRIX_NOT_INVERTABLE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSC::JSValuePtr toJS(JSC::ExecState* exec, SVGException* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGException>(exec, object, context);
}
SVGException* toSVGException(JSC::JSValuePtr value)
{
    return value->isObject(&JSSVGException::s_info) ? static_cast<JSSVGException*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
