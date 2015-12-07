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

#include "JSXMLSerializer.h"

#include <wtf/GetPtr.h>

#include "JSNode.h"
#include "PlatformString.h"
#include "XMLSerializer.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSXMLSerializerTableEntries[] =
{
    { "constructor", JSXMLSerializer::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSXMLSerializerTable = 
{
    2, 1, JSXMLSerializerTableEntries, 1
};

/* Hash table for constructor */

static const HashEntry JSXMLSerializerConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSXMLSerializerConstructorTable = 
{
    2, 1, JSXMLSerializerConstructorTableEntries, 1
};

class JSXMLSerializerConstructor : public DOMObject {
public:
    JSXMLSerializerConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSXMLSerializerPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
    virtual bool implementsConstruct() const { return true; }
    virtual JSObject* construct(ExecState* exec, const List& args) { return static_cast<JSObject*>(toJS(exec, new XMLSerializer)); }
};

const ClassInfo JSXMLSerializerConstructor::info = { "XMLSerializerConstructor", 0, &JSXMLSerializerConstructorTable, 0 };

bool JSXMLSerializerConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLSerializerConstructor, DOMObject>(exec, &JSXMLSerializerConstructorTable, this, propertyName, slot);
}

JSValue* JSXMLSerializerConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSXMLSerializerPrototypeTableEntries[] =
{
    { "serializeToString", JSXMLSerializer::SerializeToStringFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSXMLSerializerPrototypeTable = 
{
    2, 1, JSXMLSerializerPrototypeTableEntries, 1
};

const ClassInfo JSXMLSerializerPrototype::info = { "XMLSerializerPrototype", 0, &JSXMLSerializerPrototypeTable, 0 };

JSObject* JSXMLSerializerPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSXMLSerializerPrototype>(exec, "[[JSXMLSerializer.prototype]]");
}

bool JSXMLSerializerPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSXMLSerializerPrototypeFunction, JSObject>(exec, &JSXMLSerializerPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSXMLSerializer::info = { "XMLSerializer", 0, &JSXMLSerializerTable, 0 };

JSXMLSerializer::JSXMLSerializer(ExecState* exec, XMLSerializer* impl)
    : m_impl(impl)
{
    setPrototype(JSXMLSerializerPrototype::self(exec));
}

JSXMLSerializer::~JSXMLSerializer()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSXMLSerializer::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLSerializer, KJS::DOMObject>(exec, &JSXMLSerializerTable, this, propertyName, slot);
}

JSValue* JSXMLSerializer::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSXMLSerializer::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSXMLSerializerConstructor>(exec, "[[XMLSerializer.constructor]]");
}
JSValue* JSXMLSerializerPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSXMLSerializer::info))
      return throwError(exec, TypeError);

    XMLSerializer* imp = static_cast<XMLSerializer*>(static_cast<JSXMLSerializer*>(thisObj)->impl());

    switch (id) {
    case JSXMLSerializer::SerializeToStringFuncNum: {
        ExceptionCode ec = 0;
        Node* node = toNode(args[0]);


        KJS::JSValue* result = jsString(imp->serializeToString(node, ec));
        setDOMException(exec, ec);
        return result;
    }
    }
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, XMLSerializer* obj)
{
    return KJS::cacheDOMObject<XMLSerializer, JSXMLSerializer>(exec, obj);
}
XMLSerializer* toXMLSerializer(KJS::JSValue* val)
{
    return val->isObject(&JSXMLSerializer::info) ? static_cast<JSXMLSerializer*>(val)->impl() : 0;
}

}
