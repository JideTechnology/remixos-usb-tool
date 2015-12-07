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

#include "JSHTMLFrameSetElement.h"

#include <wtf/GetPtr.h>

#include "AtomicString.h"
#include "HTMLFrameSetElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLFrameSetElementTableEntries[] =
{
    { "cols", JSHTMLFrameSetElement::ColsAttrNum, DontDelete, 0, &JSHTMLFrameSetElementTableEntries[3] },
    { "rows", JSHTMLFrameSetElement::RowsAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "constructor", JSHTMLFrameSetElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSHTMLFrameSetElementTable = 
{
    2, 4, JSHTMLFrameSetElementTableEntries, 3
};

/* Hash table for constructor */

static const HashEntry JSHTMLFrameSetElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameSetElementConstructorTable = 
{
    2, 1, JSHTMLFrameSetElementConstructorTableEntries, 1
};

class JSHTMLFrameSetElementConstructor : public DOMObject {
public:
    JSHTMLFrameSetElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLFrameSetElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLFrameSetElementConstructor::info = { "HTMLFrameSetElementConstructor", 0, &JSHTMLFrameSetElementConstructorTable, 0 };

bool JSHTMLFrameSetElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFrameSetElementConstructor, DOMObject>(exec, &JSHTMLFrameSetElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLFrameSetElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLFrameSetElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameSetElementPrototypeTable = 
{
    2, 1, JSHTMLFrameSetElementPrototypeTableEntries, 1
};

const ClassInfo JSHTMLFrameSetElementPrototype::info = { "HTMLFrameSetElementPrototype", 0, &JSHTMLFrameSetElementPrototypeTable, 0 };

JSObject* JSHTMLFrameSetElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLFrameSetElementPrototype>(exec, "[[JSHTMLFrameSetElement.prototype]]");
}

const ClassInfo JSHTMLFrameSetElement::info = { "HTMLFrameSetElement", &JSHTMLElement::info, &JSHTMLFrameSetElementTable, 0 };

JSHTMLFrameSetElement::JSHTMLFrameSetElement(ExecState* exec, HTMLFrameSetElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLFrameSetElementPrototype::self(exec));
}

bool JSHTMLFrameSetElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (canGetItemsForName(exec, static_cast<HTMLFrameSetElement*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLFrameSetElement, JSHTMLElement>(exec, &JSHTMLFrameSetElementTable, this, propertyName, slot);
}

JSValue* JSHTMLFrameSetElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ColsAttrNum: {
        HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(impl());

        return jsString(imp->cols());
    }
    case RowsAttrNum: {
        HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(impl());

        return jsString(imp->rows());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLFrameSetElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLFrameSetElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLFrameSetElementTable, this);
}

void JSHTMLFrameSetElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case ColsAttrNum: {
        HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(impl());

        imp->setCols(valueToStringWithNullCheck(exec, value));
        break;
    }
    case RowsAttrNum: {
        HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(impl());

        imp->setRows(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLFrameSetElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLFrameSetElementConstructor>(exec, "[[HTMLFrameSetElement.constructor]]");
}

}
