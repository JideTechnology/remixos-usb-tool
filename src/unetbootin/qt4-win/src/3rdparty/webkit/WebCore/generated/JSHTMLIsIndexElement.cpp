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

#include "JSHTMLIsIndexElement.h"

#include <wtf/GetPtr.h>

#include "HTMLFormElement.h"
#include "HTMLIsIndexElement.h"
#include "JSHTMLFormElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLIsIndexElementTableEntries[] =
{
    { "constructor", JSHTMLIsIndexElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "form", JSHTMLIsIndexElement::FormAttrNum, DontDelete|ReadOnly, 0, &JSHTMLIsIndexElementTableEntries[3] },
    { "prompt", JSHTMLIsIndexElement::PromptAttrNum, DontDelete, 0, 0 }
};

static const HashTable JSHTMLIsIndexElementTable = 
{
    2, 4, JSHTMLIsIndexElementTableEntries, 3
};

/* Hash table for constructor */

static const HashEntry JSHTMLIsIndexElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLIsIndexElementConstructorTable = 
{
    2, 1, JSHTMLIsIndexElementConstructorTableEntries, 1
};

class JSHTMLIsIndexElementConstructor : public DOMObject {
public:
    JSHTMLIsIndexElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLIsIndexElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLIsIndexElementConstructor::info = { "HTMLIsIndexElementConstructor", 0, &JSHTMLIsIndexElementConstructorTable, 0 };

bool JSHTMLIsIndexElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLIsIndexElementConstructor, DOMObject>(exec, &JSHTMLIsIndexElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLIsIndexElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLIsIndexElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLIsIndexElementPrototypeTable = 
{
    2, 1, JSHTMLIsIndexElementPrototypeTableEntries, 1
};

const ClassInfo JSHTMLIsIndexElementPrototype::info = { "HTMLIsIndexElementPrototype", 0, &JSHTMLIsIndexElementPrototypeTable, 0 };

JSObject* JSHTMLIsIndexElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLIsIndexElementPrototype>(exec, "[[JSHTMLIsIndexElement.prototype]]");
}

const ClassInfo JSHTMLIsIndexElement::info = { "HTMLIsIndexElement", &JSHTMLInputElement::info, &JSHTMLIsIndexElementTable, 0 };

JSHTMLIsIndexElement::JSHTMLIsIndexElement(ExecState* exec, HTMLIsIndexElement* impl)
    : JSHTMLInputElement(exec, impl)
{
    setPrototype(JSHTMLIsIndexElementPrototype::self(exec));
}

bool JSHTMLIsIndexElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLIsIndexElement, JSHTMLInputElement>(exec, &JSHTMLIsIndexElementTable, this, propertyName, slot);
}

JSValue* JSHTMLIsIndexElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case FormAttrNum: {
        HTMLIsIndexElement* imp = static_cast<HTMLIsIndexElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->form()));
    }
    case PromptAttrNum: {
        HTMLIsIndexElement* imp = static_cast<HTMLIsIndexElement*>(impl());

        return jsString(imp->prompt());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLIsIndexElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLIsIndexElement, JSHTMLInputElement>(exec, propertyName, value, attr, &JSHTMLIsIndexElementTable, this);
}

void JSHTMLIsIndexElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case PromptAttrNum: {
        HTMLIsIndexElement* imp = static_cast<HTMLIsIndexElement*>(impl());

        imp->setPrompt(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLIsIndexElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLIsIndexElementConstructor>(exec, "[[HTMLIsIndexElement.constructor]]");
}

}
