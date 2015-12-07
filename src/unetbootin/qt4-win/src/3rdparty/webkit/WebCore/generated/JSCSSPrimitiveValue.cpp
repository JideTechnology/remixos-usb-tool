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

#include "JSCSSPrimitiveValue.h"

#include <wtf/GetPtr.h>

#include "CSSPrimitiveValue.h"
#include "Counter.h"
#include "JSCounter.h"
#include "JSRect.h"
#include "PlatformString.h"
#include "Rect.h"
#include "kjs_css.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSCSSPrimitiveValueTableEntries[] =
{
    { "primitiveType", JSCSSPrimitiveValue::PrimitiveTypeAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "constructor", JSCSSPrimitiveValue::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSCSSPrimitiveValueTable = 
{
    2, 2, JSCSSPrimitiveValueTableEntries, 2
};

/* Hash table for constructor */

static const HashEntry JSCSSPrimitiveValueConstructorTableEntries[] =
{
    { "CSS_IN", CSSPrimitiveValue::CSS_IN, DontDelete|ReadOnly, 0, 0 },
    { "CSS_EMS", CSSPrimitiveValue::CSS_EMS, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValueConstructorTableEntries[28] },
    { "CSS_EXS", CSSPrimitiveValue::CSS_EXS, DontDelete|ReadOnly, 0, 0 },
    { "CSS_RAD", CSSPrimitiveValue::CSS_RAD, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValueConstructorTableEntries[34] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_KHZ", CSSPrimitiveValue::CSS_KHZ, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValueConstructorTableEntries[33] },
    { "CSS_PX", CSSPrimitiveValue::CSS_PX, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValueConstructorTableEntries[32] },
    { "CSS_CM", CSSPrimitiveValue::CSS_CM, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValueConstructorTableEntries[29] },
    { "CSS_S", CSSPrimitiveValue::CSS_S, DontDelete|ReadOnly, 0, 0 },
    { "CSS_DIMENSION", CSSPrimitiveValue::CSS_DIMENSION, DontDelete|ReadOnly, 0, 0 },
    { "CSS_UNKNOWN", CSSPrimitiveValue::CSS_UNKNOWN, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValueConstructorTableEntries[26] },
    { "CSS_GRAD", CSSPrimitiveValue::CSS_GRAD, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_IDENT", CSSPrimitiveValue::CSS_IDENT, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_URI", CSSPrimitiveValue::CSS_URI, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_NUMBER", CSSPrimitiveValue::CSS_NUMBER, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_COUNTER", CSSPrimitiveValue::CSS_COUNTER, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValueConstructorTableEntries[35] },
    { "CSS_PERCENTAGE", CSSPrimitiveValue::CSS_PERCENTAGE, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValueConstructorTableEntries[27] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_MM", CSSPrimitiveValue::CSS_MM, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValueConstructorTableEntries[30] },
    { "CSS_PT", CSSPrimitiveValue::CSS_PT, DontDelete|ReadOnly, 0, 0 },
    { "CSS_PC", CSSPrimitiveValue::CSS_PC, DontDelete|ReadOnly, 0, 0 },
    { "CSS_DEG", CSSPrimitiveValue::CSS_DEG, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValueConstructorTableEntries[31] },
    { "CSS_MS", CSSPrimitiveValue::CSS_MS, DontDelete|ReadOnly, 0, 0 },
    { "CSS_HZ", CSSPrimitiveValue::CSS_HZ, DontDelete|ReadOnly, 0, 0 },
    { "CSS_STRING", CSSPrimitiveValue::CSS_STRING, DontDelete|ReadOnly, 0, 0 },
    { "CSS_ATTR", CSSPrimitiveValue::CSS_ATTR, DontDelete|ReadOnly, 0, 0 },
    { "CSS_RECT", CSSPrimitiveValue::CSS_RECT, DontDelete|ReadOnly, 0, 0 },
    { "CSS_RGBCOLOR", CSSPrimitiveValue::CSS_RGBCOLOR, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSCSSPrimitiveValueConstructorTable = 
{
    2, 36, JSCSSPrimitiveValueConstructorTableEntries, 26
};

class JSCSSPrimitiveValueConstructor : public DOMObject {
public:
    JSCSSPrimitiveValueConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSCSSPrimitiveValuePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSPrimitiveValueConstructor::info = { "CSSPrimitiveValueConstructor", 0, &JSCSSPrimitiveValueConstructorTable, 0 };

bool JSCSSPrimitiveValueConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPrimitiveValueConstructor, DOMObject>(exec, &JSCSSPrimitiveValueConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSPrimitiveValueConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSCSSPrimitiveValuePrototypeTableEntries[] =
{
    { "getStringValue", JSCSSPrimitiveValue::GetStringValueFuncNum, DontDelete|Function, 0, 0 },
    { "CSS_RECT", CSSPrimitiveValue::CSS_RECT, DontDelete|ReadOnly, 0, 0 },
    { "CSS_IDENT", CSSPrimitiveValue::CSS_IDENT, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[42] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "getRGBColorValue", JSCSSPrimitiveValue::GetRGBColorValueFuncNum, DontDelete|Function, 0, 0 },
    { "CSS_PX", CSSPrimitiveValue::CSS_PX, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[37] },
    { 0, 0, 0, 0, 0 },
    { "CSS_UNKNOWN", CSSPrimitiveValue::CSS_UNKNOWN, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_URI", CSSPrimitiveValue::CSS_URI, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_NUMBER", CSSPrimitiveValue::CSS_NUMBER, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[33] },
    { "CSS_MM", CSSPrimitiveValue::CSS_MM, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[38] },
    { "CSS_PT", CSSPrimitiveValue::CSS_PT, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[34] },
    { "CSS_EMS", CSSPrimitiveValue::CSS_EMS, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_DEG", CSSPrimitiveValue::CSS_DEG, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[40] },
    { "CSS_CM", CSSPrimitiveValue::CSS_CM, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "getFloatValue", JSCSSPrimitiveValue::GetFloatValueFuncNum, DontDelete|Function, 1, 0 },
    { "CSS_HZ", CSSPrimitiveValue::CSS_HZ, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[43] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_KHZ", CSSPrimitiveValue::CSS_KHZ, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[41] },
    { "CSS_IN", CSSPrimitiveValue::CSS_IN, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[35] },
    { "CSS_RGBCOLOR", CSSPrimitiveValue::CSS_RGBCOLOR, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "CSS_EXS", CSSPrimitiveValue::CSS_EXS, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[39] },
    { "CSS_PERCENTAGE", CSSPrimitiveValue::CSS_PERCENTAGE, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[36] },
    { "CSS_PC", CSSPrimitiveValue::CSS_PC, DontDelete|ReadOnly, 0, 0 },
    { "CSS_RAD", CSSPrimitiveValue::CSS_RAD, DontDelete|ReadOnly, 0, 0 },
    { "CSS_GRAD", CSSPrimitiveValue::CSS_GRAD, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[45] },
    { "CSS_MS", CSSPrimitiveValue::CSS_MS, DontDelete|ReadOnly, 0, 0 },
    { "CSS_S", CSSPrimitiveValue::CSS_S, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[44] },
    { "CSS_DIMENSION", CSSPrimitiveValue::CSS_DIMENSION, DontDelete|ReadOnly, 0, 0 },
    { "CSS_STRING", CSSPrimitiveValue::CSS_STRING, DontDelete|ReadOnly, 0, 0 },
    { "CSS_ATTR", CSSPrimitiveValue::CSS_ATTR, DontDelete|ReadOnly, 0, 0 },
    { "CSS_COUNTER", CSSPrimitiveValue::CSS_COUNTER, DontDelete|ReadOnly, 0, &JSCSSPrimitiveValuePrototypeTableEntries[46] },
    { "setFloatValue", JSCSSPrimitiveValue::SetFloatValueFuncNum, DontDelete|Function, 2, 0 },
    { "setStringValue", JSCSSPrimitiveValue::SetStringValueFuncNum, DontDelete|Function, 2, 0 },
    { "getCounterValue", JSCSSPrimitiveValue::GetCounterValueFuncNum, DontDelete|Function, 0, 0 },
    { "getRectValue", JSCSSPrimitiveValue::GetRectValueFuncNum, DontDelete|Function, 0, 0 }
};

static const HashTable JSCSSPrimitiveValuePrototypeTable = 
{
    2, 47, JSCSSPrimitiveValuePrototypeTableEntries, 33
};

const ClassInfo JSCSSPrimitiveValuePrototype::info = { "CSSPrimitiveValuePrototype", 0, &JSCSSPrimitiveValuePrototypeTable, 0 };

JSObject* JSCSSPrimitiveValuePrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCSSPrimitiveValuePrototype>(exec, "[[JSCSSPrimitiveValue.prototype]]");
}

bool JSCSSPrimitiveValuePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSCSSPrimitiveValuePrototypeFunction, JSCSSPrimitiveValuePrototype, JSObject>(exec, &JSCSSPrimitiveValuePrototypeTable, this, propertyName, slot);
}

JSValue* JSCSSPrimitiveValuePrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSCSSPrimitiveValue::info = { "CSSPrimitiveValue", &JSCSSValue::info, &JSCSSPrimitiveValueTable, 0 };

JSCSSPrimitiveValue::JSCSSPrimitiveValue(ExecState* exec, CSSPrimitiveValue* impl)
    : JSCSSValue(exec, impl)
{
    setPrototype(JSCSSPrimitiveValuePrototype::self(exec));
}

bool JSCSSPrimitiveValue::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPrimitiveValue, JSCSSValue>(exec, &JSCSSPrimitiveValueTable, this, propertyName, slot);
}

JSValue* JSCSSPrimitiveValue::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case PrimitiveTypeAttrNum: {
        CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(impl());

        return jsNumber(imp->primitiveType());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSCSSPrimitiveValue::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCSSPrimitiveValueConstructor>(exec, "[[CSSPrimitiveValue.constructor]]");
}
JSValue* JSCSSPrimitiveValuePrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSCSSPrimitiveValue::info))
      return throwError(exec, TypeError);

    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(static_cast<JSCSSPrimitiveValue*>(thisObj)->impl());

    switch (id) {
    case JSCSSPrimitiveValue::SetFloatValueFuncNum: {
        ExceptionCode ec = 0;
        unsigned short unitType = args[0]->toInt32(exec);
        float floatValue = args[1]->toFloat(exec);

        imp->setFloatValue(unitType, floatValue, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSCSSPrimitiveValue::GetFloatValueFuncNum: {
        unsigned short unitType = args[0]->toInt32(exec);


        KJS::JSValue* result = jsNumber(imp->getFloatValue(unitType));
        return result;
    }
    case JSCSSPrimitiveValue::SetStringValueFuncNum: {
        ExceptionCode ec = 0;
        unsigned short stringType = args[0]->toInt32(exec);
        String stringValue = args[1]->toString(exec);

        imp->setStringValue(stringType, stringValue, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSCSSPrimitiveValue::GetStringValueFuncNum: {


        KJS::JSValue* result = jsString(imp->getStringValue());
        return result;
    }
    case JSCSSPrimitiveValue::GetCounterValueFuncNum: {


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getCounterValue()));
        return result;
    }
    case JSCSSPrimitiveValue::GetRectValueFuncNum: {


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getRectValue()));
        return result;
    }
    case JSCSSPrimitiveValue::GetRGBColorValueFuncNum: {


        KJS::JSValue* result = getJSRGBColor(exec, imp->getRGBColorValue());
        return result;
    }
    }
    return 0;
}

}
