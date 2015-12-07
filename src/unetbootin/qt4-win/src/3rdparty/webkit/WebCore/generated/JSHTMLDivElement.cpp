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

#include "JSHTMLDivElement.h"

#include <wtf/GetPtr.h>

#include "HTMLDivElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLDivElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "align", JSHTMLDivElement::AlignAttrNum, DontDelete, 0, &JSHTMLDivElementTableEntries[2] },
    { "constructor", JSHTMLDivElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSHTMLDivElementTable = 
{
    2, 3, JSHTMLDivElementTableEntries, 2
};

/* Hash table for constructor */

static const HashEntry JSHTMLDivElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLDivElementConstructorTable = 
{
    2, 1, JSHTMLDivElementConstructorTableEntries, 1
};

class JSHTMLDivElementConstructor : public DOMObject {
public:
    JSHTMLDivElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLDivElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLDivElementConstructor::info = { "HTMLDivElementConstructor", 0, &JSHTMLDivElementConstructorTable, 0 };

bool JSHTMLDivElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDivElementConstructor, DOMObject>(exec, &JSHTMLDivElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLDivElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLDivElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLDivElementPrototypeTable = 
{
    2, 1, JSHTMLDivElementPrototypeTableEntries, 1
};

const ClassInfo JSHTMLDivElementPrototype::info = { "HTMLDivElementPrototype", 0, &JSHTMLDivElementPrototypeTable, 0 };

JSObject* JSHTMLDivElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLDivElementPrototype>(exec, "[[JSHTMLDivElement.prototype]]");
}

const ClassInfo JSHTMLDivElement::info = { "HTMLDivElement", &JSHTMLElement::info, &JSHTMLDivElementTable, 0 };

JSHTMLDivElement::JSHTMLDivElement(ExecState* exec, HTMLDivElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLDivElementPrototype::self(exec));
}

bool JSHTMLDivElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDivElement, JSHTMLElement>(exec, &JSHTMLDivElementTable, this, propertyName, slot);
}

JSValue* JSHTMLDivElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AlignAttrNum: {
        HTMLDivElement* imp = static_cast<HTMLDivElement*>(impl());

        return jsString(imp->align());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLDivElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLDivElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLDivElementTable, this);
}

void JSHTMLDivElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case AlignAttrNum: {
        HTMLDivElement* imp = static_cast<HTMLDivElement*>(impl());

        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLDivElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLDivElementConstructor>(exec, "[[HTMLDivElement.constructor]]");
}

}
