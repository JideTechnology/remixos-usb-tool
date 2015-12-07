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
#include "JSSVGAngle.h"

#include <wtf/GetPtr.h>

#include "PlatformString.h"
#include "SVGAngle.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGAngleTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "value", JSSVGAngle::ValueAttrNum, DontDelete, 0, &JSSVGAngleTableEntries[5] },
    { "valueInSpecifiedUnits", JSSVGAngle::ValueInSpecifiedUnitsAttrNum, DontDelete, 0, 0 },
    { "unitType", JSSVGAngle::UnitTypeAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "valueAsString", JSSVGAngle::ValueAsStringAttrNum, DontDelete, 0, &JSSVGAngleTableEntries[6] },
    { "constructor", JSSVGAngle::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSSVGAngleTable = 
{
    2, 7, JSSVGAngleTableEntries, 5
};

/* Hash table for constructor */

static const HashEntry JSSVGAngleConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "SVG_ANGLETYPE_UNSPECIFIED", SVGAngle::SVG_ANGLETYPE_UNSPECIFIED, DontDelete|ReadOnly, 0, &JSSVGAngleConstructorTableEntries[6] },
    { "SVG_ANGLETYPE_DEG", SVGAngle::SVG_ANGLETYPE_DEG, DontDelete|ReadOnly, 0, &JSSVGAngleConstructorTableEntries[5] },
    { "SVG_ANGLETYPE_UNKNOWN", SVGAngle::SVG_ANGLETYPE_UNKNOWN, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_ANGLETYPE_RAD", SVGAngle::SVG_ANGLETYPE_RAD, DontDelete|ReadOnly, 0, 0 },
    { "SVG_ANGLETYPE_GRAD", SVGAngle::SVG_ANGLETYPE_GRAD, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGAngleConstructorTable = 
{
    2, 7, JSSVGAngleConstructorTableEntries, 5
};

class JSSVGAngleConstructor : public DOMObject {
public:
    JSSVGAngleConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSSVGAnglePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSSVGAngleConstructor::info = { "SVGAngleConstructor", 0, &JSSVGAngleConstructorTable, 0 };

bool JSSVGAngleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAngleConstructor, DOMObject>(exec, &JSSVGAngleConstructorTable, this, propertyName, slot);
}

JSValue* JSSVGAngleConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSSVGAnglePrototypeTableEntries[] =
{
    { "SVG_ANGLETYPE_UNSPECIFIED", SVGAngle::SVG_ANGLETYPE_UNSPECIFIED, DontDelete|ReadOnly, 0, 0 },
    { "SVG_ANGLETYPE_UNKNOWN", SVGAngle::SVG_ANGLETYPE_UNKNOWN, DontDelete|ReadOnly, 0, &JSSVGAnglePrototypeTableEntries[7] },
    { "SVG_ANGLETYPE_GRAD", SVGAngle::SVG_ANGLETYPE_GRAD, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "newValueSpecifiedUnits", JSSVGAngle::NewValueSpecifiedUnitsFuncNum, DontDelete|Function, 2, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_ANGLETYPE_DEG", SVGAngle::SVG_ANGLETYPE_DEG, DontDelete|ReadOnly, 0, &JSSVGAnglePrototypeTableEntries[8] },
    { "SVG_ANGLETYPE_RAD", SVGAngle::SVG_ANGLETYPE_RAD, DontDelete|ReadOnly, 0, &JSSVGAnglePrototypeTableEntries[9] },
    { "convertToSpecifiedUnits", JSSVGAngle::ConvertToSpecifiedUnitsFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSSVGAnglePrototypeTable = 
{
    2, 10, JSSVGAnglePrototypeTableEntries, 7
};

const ClassInfo JSSVGAnglePrototype::info = { "SVGAnglePrototype", 0, &JSSVGAnglePrototypeTable, 0 };

JSObject* JSSVGAnglePrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGAnglePrototype>(exec, "[[JSSVGAngle.prototype]]");
}

bool JSSVGAnglePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGAnglePrototypeFunction, JSSVGAnglePrototype, JSObject>(exec, &JSSVGAnglePrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGAnglePrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSSVGAngle::info = { "SVGAngle", 0, &JSSVGAngleTable, 0 };

JSSVGAngle::JSSVGAngle(ExecState* exec, SVGAngle* impl)
    : m_impl(impl)
{
    setPrototype(JSSVGAnglePrototype::self(exec));
}

JSSVGAngle::~JSSVGAngle()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSSVGAngle::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAngle, KJS::DOMObject>(exec, &JSSVGAngleTable, this, propertyName, slot);
}

JSValue* JSSVGAngle::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case UnitTypeAttrNum: {
        SVGAngle* imp = static_cast<SVGAngle*>(impl());

        return jsNumber(imp->unitType());
    }
    case ValueAttrNum: {
        SVGAngle* imp = static_cast<SVGAngle*>(impl());

        return jsNumber(imp->value());
    }
    case ValueInSpecifiedUnitsAttrNum: {
        SVGAngle* imp = static_cast<SVGAngle*>(impl());

        return jsNumber(imp->valueInSpecifiedUnits());
    }
    case ValueAsStringAttrNum: {
        SVGAngle* imp = static_cast<SVGAngle*>(impl());

        return jsString(imp->valueAsString());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSSVGAngle::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGAngle, KJS::DOMObject>(exec, propertyName, value, attr, &JSSVGAngleTable, this);
}

void JSSVGAngle::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case ValueAttrNum: {
        SVGAngle* imp = static_cast<SVGAngle*>(impl());

        imp->setValue(value->toFloat(exec));
        break;
    }
    case ValueInSpecifiedUnitsAttrNum: {
        SVGAngle* imp = static_cast<SVGAngle*>(impl());

        imp->setValueInSpecifiedUnits(value->toFloat(exec));
        break;
    }
    case ValueAsStringAttrNum: {
        SVGAngle* imp = static_cast<SVGAngle*>(impl());

        imp->setValueAsString(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSSVGAngle::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGAngleConstructor>(exec, "[[SVGAngle.constructor]]");
}
JSValue* JSSVGAnglePrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGAngle::info))
      return throwError(exec, TypeError);

    SVGAngle* imp = static_cast<SVGAngle*>(static_cast<JSSVGAngle*>(thisObj)->impl());

    switch (id) {
    case JSSVGAngle::NewValueSpecifiedUnitsFuncNum: {
        unsigned short unitType = args[0]->toInt32(exec);
        float valueInSpecifiedUnits = args[1]->toFloat(exec);

        imp->newValueSpecifiedUnits(unitType, valueInSpecifiedUnits);
        return jsUndefined();
    }
    case JSSVGAngle::ConvertToSpecifiedUnitsFuncNum: {
        unsigned short unitType = args[0]->toInt32(exec);

        imp->convertToSpecifiedUnits(unitType);
        return jsUndefined();
    }
    }
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, SVGAngle* obj)
{
    return KJS::cacheDOMObject<SVGAngle, JSSVGAngle>(exec, obj);
}
SVGAngle* toSVGAngle(KJS::JSValue* val)
{
    return val->isObject(&JSSVGAngle::info) ? static_cast<JSSVGAngle*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)
