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

#include "JSCSSValue.h"

#include <wtf/GetPtr.h>

#include "CSSValue.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSCSSValueTableEntries[] =
{
    { "cssText", JSCSSValue::CssTextAttrNum, DontDelete, 0, &JSCSSValueTableEntries[3] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "cssValueType", JSCSSValue::CssValueTypeAttrNum, DontDelete|ReadOnly, 0, &JSCSSValueTableEntries[4] },
    { "constructor", JSCSSValue::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSCSSValueTable = 
{
    2, 5, JSCSSValueTableEntries, 3
};

/* Hash table for constructor */

static const HashEntry JSCSSValueConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "CSS_INHERIT", CSSValue::CSS_INHERIT, DontDelete|ReadOnly, 0, 0 },
    { "CSS_CUSTOM", CSSValue::CSS_CUSTOM, DontDelete|ReadOnly, 0, 0 },
    { "CSS_PRIMITIVE_VALUE", CSSValue::CSS_PRIMITIVE_VALUE, DontDelete|ReadOnly, 0, &JSCSSValueConstructorTableEntries[4] },
    { "CSS_VALUE_LIST", CSSValue::CSS_VALUE_LIST, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSCSSValueConstructorTable = 
{
    2, 5, JSCSSValueConstructorTableEntries, 4
};

class JSCSSValueConstructor : public DOMObject {
public:
    JSCSSValueConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSCSSValuePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSValueConstructor::info = { "CSSValueConstructor", 0, &JSCSSValueConstructorTable, 0 };

bool JSCSSValueConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSValueConstructor, DOMObject>(exec, &JSCSSValueConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSValueConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSCSSValuePrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "CSS_INHERIT", CSSValue::CSS_INHERIT, DontDelete|ReadOnly, 0, 0 },
    { "CSS_CUSTOM", CSSValue::CSS_CUSTOM, DontDelete|ReadOnly, 0, 0 },
    { "CSS_PRIMITIVE_VALUE", CSSValue::CSS_PRIMITIVE_VALUE, DontDelete|ReadOnly, 0, &JSCSSValuePrototypeTableEntries[4] },
    { "CSS_VALUE_LIST", CSSValue::CSS_VALUE_LIST, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSCSSValuePrototypeTable = 
{
    2, 5, JSCSSValuePrototypeTableEntries, 4
};

const ClassInfo JSCSSValuePrototype::info = { "CSSValuePrototype", 0, &JSCSSValuePrototypeTable, 0 };

JSObject* JSCSSValuePrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCSSValuePrototype>(exec, "[[JSCSSValue.prototype]]");
}

bool JSCSSValuePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSValuePrototype, JSObject>(exec, &JSCSSValuePrototypeTable, this, propertyName, slot);
}

JSValue* JSCSSValuePrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSCSSValue::info = { "CSSValue", 0, &JSCSSValueTable, 0 };

JSCSSValue::JSCSSValue(ExecState* exec, CSSValue* impl)
    : m_impl(impl)
{
    setPrototype(JSCSSValuePrototype::self(exec));
}

JSCSSValue::~JSCSSValue()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSCSSValue::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSValue, KJS::DOMObject>(exec, &JSCSSValueTable, this, propertyName, slot);
}

JSValue* JSCSSValue::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CssTextAttrNum: {
        CSSValue* imp = static_cast<CSSValue*>(impl());

        return jsStringOrNull(imp->cssText());
    }
    case CssValueTypeAttrNum: {
        CSSValue* imp = static_cast<CSSValue*>(impl());

        return jsNumber(imp->cssValueType());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSCSSValue::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSCSSValue, KJS::DOMObject>(exec, propertyName, value, attr, &JSCSSValueTable, this);
}

void JSCSSValue::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case CssTextAttrNum: {
        CSSValue* imp = static_cast<CSSValue*>(impl());

        ExceptionCode ec = 0;
        imp->setCssText(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    }
}

JSValue* JSCSSValue::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCSSValueConstructor>(exec, "[[CSSValue.constructor]]");
}
CSSValue* toCSSValue(KJS::JSValue* val)
{
    return val->isObject(&JSCSSValue::info) ? static_cast<JSCSSValue*>(val)->impl() : 0;
}

}
