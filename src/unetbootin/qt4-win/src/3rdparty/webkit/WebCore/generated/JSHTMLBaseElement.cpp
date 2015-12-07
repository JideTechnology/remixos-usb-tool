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

#include "JSHTMLBaseElement.h"

#include <wtf/GetPtr.h>

#include "HTMLBaseElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLBaseElementTableEntries[] =
{
    { "constructor", JSHTMLBaseElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 },
    { "href", JSHTMLBaseElement::HrefAttrNum, DontDelete, 0, &JSHTMLBaseElementTableEntries[3] },
    { 0, 0, 0, 0, 0 },
    { "target", JSHTMLBaseElement::TargetAttrNum, DontDelete, 0, 0 }
};

static const HashTable JSHTMLBaseElementTable = 
{
    2, 4, JSHTMLBaseElementTableEntries, 3
};

/* Hash table for constructor */

static const HashEntry JSHTMLBaseElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLBaseElementConstructorTable = 
{
    2, 1, JSHTMLBaseElementConstructorTableEntries, 1
};

class JSHTMLBaseElementConstructor : public DOMObject {
public:
    JSHTMLBaseElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLBaseElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLBaseElementConstructor::info = { "HTMLBaseElementConstructor", 0, &JSHTMLBaseElementConstructorTable, 0 };

bool JSHTMLBaseElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBaseElementConstructor, DOMObject>(exec, &JSHTMLBaseElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLBaseElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLBaseElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLBaseElementPrototypeTable = 
{
    2, 1, JSHTMLBaseElementPrototypeTableEntries, 1
};

const ClassInfo JSHTMLBaseElementPrototype::info = { "HTMLBaseElementPrototype", 0, &JSHTMLBaseElementPrototypeTable, 0 };

JSObject* JSHTMLBaseElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLBaseElementPrototype>(exec, "[[JSHTMLBaseElement.prototype]]");
}

const ClassInfo JSHTMLBaseElement::info = { "HTMLBaseElement", &JSHTMLElement::info, &JSHTMLBaseElementTable, 0 };

JSHTMLBaseElement::JSHTMLBaseElement(ExecState* exec, HTMLBaseElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLBaseElementPrototype::self(exec));
}

bool JSHTMLBaseElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBaseElement, JSHTMLElement>(exec, &JSHTMLBaseElementTable, this, propertyName, slot);
}

JSValue* JSHTMLBaseElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case HrefAttrNum: {
        HTMLBaseElement* imp = static_cast<HTMLBaseElement*>(impl());

        return jsString(imp->href());
    }
    case TargetAttrNum: {
        HTMLBaseElement* imp = static_cast<HTMLBaseElement*>(impl());

        return jsString(imp->target());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLBaseElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLBaseElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLBaseElementTable, this);
}

void JSHTMLBaseElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case HrefAttrNum: {
        HTMLBaseElement* imp = static_cast<HTMLBaseElement*>(impl());

        imp->setHref(valueToStringWithNullCheck(exec, value));
        break;
    }
    case TargetAttrNum: {
        HTMLBaseElement* imp = static_cast<HTMLBaseElement*>(impl());

        imp->setTarget(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLBaseElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLBaseElementConstructor>(exec, "[[HTMLBaseElement.constructor]]");
}

}
