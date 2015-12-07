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
#include "KURL.h"

#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLFrameSetElement)

/* Hash table */

static const HashTableValue JSHTMLFrameSetElementTableValues[4] =
{
    { "cols", DontDelete, (intptr_t)jsHTMLFrameSetElementCols, (intptr_t)setJSHTMLFrameSetElementCols },
    { "rows", DontDelete, (intptr_t)jsHTMLFrameSetElementRows, (intptr_t)setJSHTMLFrameSetElementRows },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLFrameSetElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameSetElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 7, JSHTMLFrameSetElementTableValues, 0 };
#else
    { 8, 7, JSHTMLFrameSetElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLFrameSetElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameSetElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLFrameSetElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLFrameSetElementConstructorTableValues, 0 };
#endif

class JSHTMLFrameSetElementConstructor : public DOMObject {
public:
    JSHTMLFrameSetElementConstructor(ExecState* exec)
        : DOMObject(JSHTMLFrameSetElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSHTMLFrameSetElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSHTMLFrameSetElementConstructor::s_info = { "HTMLFrameSetElementConstructor", 0, &JSHTMLFrameSetElementConstructorTable, 0 };

bool JSHTMLFrameSetElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFrameSetElementConstructor, DOMObject>(exec, &JSHTMLFrameSetElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLFrameSetElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameSetElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLFrameSetElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLFrameSetElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLFrameSetElementPrototype::s_info = { "HTMLFrameSetElementPrototype", 0, &JSHTMLFrameSetElementPrototypeTable, 0 };

JSObject* JSHTMLFrameSetElementPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSHTMLFrameSetElement>(exec);
}

const ClassInfo JSHTMLFrameSetElement::s_info = { "HTMLFrameSetElement", &JSHTMLElement::s_info, &JSHTMLFrameSetElementTable, 0 };

JSHTMLFrameSetElement::JSHTMLFrameSetElement(PassRefPtr<Structure> structure, PassRefPtr<HTMLFrameSetElement> impl)
    : JSHTMLElement(structure, impl)
{
}

JSObject* JSHTMLFrameSetElement::createPrototype(ExecState* exec)
{
    return new (exec) JSHTMLFrameSetElementPrototype(JSHTMLFrameSetElementPrototype::createStructure(JSHTMLElementPrototype::self(exec)));
}

bool JSHTMLFrameSetElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (canGetItemsForName(exec, static_cast<HTMLFrameSetElement*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLFrameSetElement, Base>(exec, &JSHTMLFrameSetElementTable, this, propertyName, slot);
}

JSValuePtr jsHTMLFrameSetElementCols(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(static_cast<JSHTMLFrameSetElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->cols());
}

JSValuePtr jsHTMLFrameSetElementRows(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(static_cast<JSHTMLFrameSetElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->rows());
}

JSValuePtr jsHTMLFrameSetElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSHTMLFrameSetElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSHTMLFrameSetElement::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLFrameSetElement, Base>(exec, propertyName, value, &JSHTMLFrameSetElementTable, this, slot);
}

void setJSHTMLFrameSetElementCols(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(static_cast<JSHTMLFrameSetElement*>(thisObject)->impl());
    imp->setCols(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLFrameSetElementRows(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(static_cast<JSHTMLFrameSetElement*>(thisObject)->impl());
    imp->setRows(valueToStringWithNullCheck(exec, value));
}

JSValuePtr JSHTMLFrameSetElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSHTMLFrameSetElementConstructor>(exec);
}


}
