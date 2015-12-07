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

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGLength.h"

#include <wtf/GetPtr.h>

#include "PlatformString.h"
#include "SVGLength.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGLengthTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "value", JSSVGLength::ValueAttrNum, DontDelete, 0, &JSSVGLengthTableEntries[5] },
    { "valueInSpecifiedUnits", JSSVGLength::ValueInSpecifiedUnitsAttrNum, DontDelete, 0, 0 },
    { "unitType", JSSVGLength::UnitTypeAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "valueAsString", JSSVGLength::ValueAsStringAttrNum, DontDelete, 0, &JSSVGLengthTableEntries[6] },
    { "constructor", JSSVGLength::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSSVGLengthTable = 
{
    2, 7, JSSVGLengthTableEntries, 5
};

/* Hash table for constructor */

static const HashEntry JSSVGLengthConstructorTableEntries[] =
{
    { "SVG_LENGTHTYPE_CM", SVGLength::SVG_LENGTHTYPE_CM, DontDelete|ReadOnly, 0, &JSSVGLengthConstructorTableEntries[12] },
    { "SVG_LENGTHTYPE_PT", SVGLength::SVG_LENGTHTYPE_PT, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_LENGTHTYPE_EXS", SVGLength::SVG_LENGTHTYPE_EXS, DontDelete|ReadOnly, 0, 0 },
    { "SVG_LENGTHTYPE_PERCENTAGE", SVGLength::SVG_LENGTHTYPE_PERCENTAGE, DontDelete|ReadOnly, 0, 0 },
    { "SVG_LENGTHTYPE_EMS", SVGLength::SVG_LENGTHTYPE_EMS, DontDelete|ReadOnly, 0, 0 },
    { "SVG_LENGTHTYPE_UNKNOWN", SVGLength::SVG_LENGTHTYPE_UNKNOWN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_LENGTHTYPE_MM", SVGLength::SVG_LENGTHTYPE_MM, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_LENGTHTYPE_NUMBER", SVGLength::SVG_LENGTHTYPE_NUMBER, DontDelete|ReadOnly, 0, &JSSVGLengthConstructorTableEntries[11] },
    { 0, 0, 0, 0, 0 },
    { "SVG_LENGTHTYPE_PX", SVGLength::SVG_LENGTHTYPE_PX, DontDelete|ReadOnly, 0, 0 },
    { "SVG_LENGTHTYPE_IN", SVGLength::SVG_LENGTHTYPE_IN, DontDelete|ReadOnly, 0, &JSSVGLengthConstructorTableEntries[13] },
    { "SVG_LENGTHTYPE_PC", SVGLength::SVG_LENGTHTYPE_PC, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGLengthConstructorTable = 
{
    2, 14, JSSVGLengthConstructorTableEntries, 11
};

class JSSVGLengthConstructor : public DOMObject {
public:
    JSSVGLengthConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSSVGLengthPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSSVGLengthConstructor::info = { "SVGLengthConstructor", 0, &JSSVGLengthConstructorTable, 0 };

bool JSSVGLengthConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLengthConstructor, DOMObject>(exec, &JSSVGLengthConstructorTable, this, propertyName, slot);
}

JSValue* JSSVGLengthConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSSVGLengthPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "SVG_LENGTHTYPE_PERCENTAGE", SVGLength::SVG_LENGTHTYPE_PERCENTAGE, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_LENGTHTYPE_PX", SVGLength::SVG_LENGTHTYPE_PX, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_LENGTHTYPE_MM", SVGLength::SVG_LENGTHTYPE_MM, DontDelete|ReadOnly, 0, &JSSVGLengthPrototypeTableEntries[16] },
    { "SVG_LENGTHTYPE_PC", SVGLength::SVG_LENGTHTYPE_PC, DontDelete|ReadOnly, 0, 0 },
    { "convertToSpecifiedUnits", JSSVGLength::ConvertToSpecifiedUnitsFuncNum, DontDelete|Function, 1, 0 },
    { "SVG_LENGTHTYPE_UNKNOWN", SVGLength::SVG_LENGTHTYPE_UNKNOWN, DontDelete|ReadOnly, 0, &JSSVGLengthPrototypeTableEntries[13] },
    { "SVG_LENGTHTYPE_EXS", SVGLength::SVG_LENGTHTYPE_EXS, DontDelete|ReadOnly, 0, &JSSVGLengthPrototypeTableEntries[17] },
    { "SVG_LENGTHTYPE_NUMBER", SVGLength::SVG_LENGTHTYPE_NUMBER, DontDelete|ReadOnly, 0, &JSSVGLengthPrototypeTableEntries[14] },
    { 0, 0, 0, 0, 0 },
    { "SVG_LENGTHTYPE_EMS", SVGLength::SVG_LENGTHTYPE_EMS, DontDelete|ReadOnly, 0, &JSSVGLengthPrototypeTableEntries[15] },
    { "SVG_LENGTHTYPE_CM", SVGLength::SVG_LENGTHTYPE_CM, DontDelete|ReadOnly, 0, 0 },
    { "SVG_LENGTHTYPE_IN", SVGLength::SVG_LENGTHTYPE_IN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_LENGTHTYPE_PT", SVGLength::SVG_LENGTHTYPE_PT, DontDelete|ReadOnly, 0, 0 },
    { "newValueSpecifiedUnits", JSSVGLength::NewValueSpecifiedUnitsFuncNum, DontDelete|Function, 2, 0 }
};

static const HashTable JSSVGLengthPrototypeTable = 
{
    2, 18, JSSVGLengthPrototypeTableEntries, 13
};

const ClassInfo JSSVGLengthPrototype::info = { "SVGLengthPrototype", 0, &JSSVGLengthPrototypeTable, 0 };

JSObject* JSSVGLengthPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGLengthPrototype>(exec, "[[JSSVGLength.prototype]]");
}

bool JSSVGLengthPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGLengthPrototypeFunction, JSSVGLengthPrototype, JSObject>(exec, &JSSVGLengthPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGLengthPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSSVGLength::info = { "SVGLength", 0, &JSSVGLengthTable, 0 };

JSSVGLength::JSSVGLength(ExecState* exec, JSSVGPODTypeWrapper<SVGLength>* impl)
    : m_impl(impl)
{
    setPrototype(JSSVGLengthPrototype::self(exec));
}

JSSVGLength::~JSSVGLength()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSSVGLength::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLength, KJS::DOMObject>(exec, &JSSVGLengthTable, this, propertyName, slot);
}

JSValue* JSSVGLength::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case UnitTypeAttrNum: {
        SVGLength& imp(*impl());

        return jsNumber(imp.unitType());
    }
    case ValueAttrNum: {
        SVGLength& imp(*impl());

        return jsNumber(imp.value());
    }
    case ValueInSpecifiedUnitsAttrNum: {
        SVGLength& imp(*impl());

        return jsNumber(imp.valueInSpecifiedUnits());
    }
    case ValueAsStringAttrNum: {
        SVGLength& imp(*impl());

        return jsString(imp.valueAsString());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSSVGLength::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGLength, KJS::DOMObject>(exec, propertyName, value, attr, &JSSVGLengthTable, this);
}

void JSSVGLength::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case ValueAttrNum: {
        SVGLength& imp(*impl());

        imp.setValue(value->toFloat(exec));
        m_impl->commitChange(exec);
        break;
    }
    case ValueInSpecifiedUnitsAttrNum: {
        SVGLength& imp(*impl());

        imp.setValueInSpecifiedUnits(value->toFloat(exec));
        m_impl->commitChange(exec);
        break;
    }
    case ValueAsStringAttrNum: {
        SVGLength& imp(*impl());

        imp.setValueAsString(valueToStringWithNullCheck(exec, value));
        m_impl->commitChange(exec);
        break;
    }
    }
}

JSValue* JSSVGLength::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGLengthConstructor>(exec, "[[SVGLength.constructor]]");
}
JSValue* JSSVGLengthPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGLength::info))
      return throwError(exec, TypeError);

    JSSVGPODTypeWrapper<SVGLength>* wrapper = static_cast<JSSVGLength*>(thisObj)->impl();
    SVGLength& imp(*wrapper);

    switch (id) {
    case JSSVGLength::NewValueSpecifiedUnitsFuncNum: {
        unsigned short unitType = args[0]->toInt32(exec);
        float valueInSpecifiedUnits = args[1]->toFloat(exec);

        imp.newValueSpecifiedUnits(unitType, valueInSpecifiedUnits);
        wrapper->commitChange(exec);
        return jsUndefined();
    }
    case JSSVGLength::ConvertToSpecifiedUnitsFuncNum: {
        unsigned short unitType = args[0]->toInt32(exec);

        imp.convertToSpecifiedUnits(unitType);
        wrapper->commitChange(exec);
        return jsUndefined();
    }
    }
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, JSSVGPODTypeWrapper<SVGLength>* obj)
{
    return KJS::cacheDOMObject<JSSVGPODTypeWrapper<SVGLength>, JSSVGLength>(exec, obj);
}
SVGLength toSVGLength(KJS::JSValue* val)
{
    return val->isObject(&JSSVGLength::info) ? (SVGLength) *static_cast<JSSVGLength*>(val)->impl() : SVGLength();
}

}

#endif // ENABLE(SVG)
