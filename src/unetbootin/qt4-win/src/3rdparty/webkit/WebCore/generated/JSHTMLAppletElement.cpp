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

#include "JSHTMLAppletElement.h"

#include <wtf/GetPtr.h>

#include "AtomicString.h"
#include "HTMLAppletElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLAppletElementTableEntries[] =
{
    { "hspace", JSHTMLAppletElement::HspaceAttrNum, DontDelete, 0, 0 },
    { "alt", JSHTMLAppletElement::AltAttrNum, DontDelete, 0, &JSHTMLAppletElementTableEntries[14] },
    { "object", JSHTMLAppletElement::ObjectAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "vspace", JSHTMLAppletElement::VspaceAttrNum, DontDelete, 0, 0 },
    { "align", JSHTMLAppletElement::AlignAttrNum, DontDelete, 0, &JSHTMLAppletElementTableEntries[12] },
    { "codeBase", JSHTMLAppletElement::CodeBaseAttrNum, DontDelete, 0, 0 },
    { "width", JSHTMLAppletElement::WidthAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "constructor", JSHTMLAppletElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "archive", JSHTMLAppletElement::ArchiveAttrNum, DontDelete, 0, 0 },
    { "code", JSHTMLAppletElement::CodeAttrNum, DontDelete, 0, &JSHTMLAppletElementTableEntries[13] },
    { "height", JSHTMLAppletElement::HeightAttrNum, DontDelete, 0, 0 },
    { "name", JSHTMLAppletElement::NameAttrNum, DontDelete, 0, 0 }
};

static const HashTable JSHTMLAppletElementTable = 
{
    2, 15, JSHTMLAppletElementTableEntries, 12
};

/* Hash table for constructor */

static const HashEntry JSHTMLAppletElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLAppletElementConstructorTable = 
{
    2, 1, JSHTMLAppletElementConstructorTableEntries, 1
};

class JSHTMLAppletElementConstructor : public DOMObject {
public:
    JSHTMLAppletElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLAppletElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLAppletElementConstructor::info = { "HTMLAppletElementConstructor", 0, &JSHTMLAppletElementConstructorTable, 0 };

bool JSHTMLAppletElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAppletElementConstructor, DOMObject>(exec, &JSHTMLAppletElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLAppletElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLAppletElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLAppletElementPrototypeTable = 
{
    2, 1, JSHTMLAppletElementPrototypeTableEntries, 1
};

const ClassInfo JSHTMLAppletElementPrototype::info = { "HTMLAppletElementPrototype", 0, &JSHTMLAppletElementPrototypeTable, 0 };

JSObject* JSHTMLAppletElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLAppletElementPrototype>(exec, "[[JSHTMLAppletElement.prototype]]");
}

const ClassInfo JSHTMLAppletElement::info = { "HTMLAppletElement", &JSHTMLElement::info, &JSHTMLAppletElementTable, 0 };

JSHTMLAppletElement::JSHTMLAppletElement(ExecState* exec, HTMLAppletElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLAppletElementPrototype::self(exec));
}

bool JSHTMLAppletElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (canGetItemsForName(exec, static_cast<HTMLAppletElement*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    if (customGetOwnPropertySlot(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSHTMLAppletElement, JSHTMLElement>(exec, &JSHTMLAppletElementTable, this, propertyName, slot);
}

JSValue* JSHTMLAppletElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AlignAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->align());
    }
    case AltAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->alt());
    }
    case ArchiveAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->archive());
    }
    case CodeAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->code());
    }
    case CodeBaseAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->codeBase());
    }
    case HeightAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->height());
    }
    case HspaceAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->hspace());
    }
    case NameAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->name());
    }
    case ObjectAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->object());
    }
    case VspaceAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->vspace());
    }
    case WidthAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        return jsString(imp->width());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLAppletElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    if (customPut(exec, propertyName, value, attr))
        return;
    lookupPut<JSHTMLAppletElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLAppletElementTable, this);
}

void JSHTMLAppletElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case AlignAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case AltAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setAlt(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ArchiveAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setArchive(valueToStringWithNullCheck(exec, value));
        break;
    }
    case CodeAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setCode(valueToStringWithNullCheck(exec, value));
        break;
    }
    case CodeBaseAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setCodeBase(valueToStringWithNullCheck(exec, value));
        break;
    }
    case HeightAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setHeight(valueToStringWithNullCheck(exec, value));
        break;
    }
    case HspaceAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setHspace(valueToStringWithNullCheck(exec, value));
        break;
    }
    case NameAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ObjectAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setObject(valueToStringWithNullCheck(exec, value));
        break;
    }
    case VspaceAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setVspace(valueToStringWithNullCheck(exec, value));
        break;
    }
    case WidthAttrNum: {
        HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(impl());

        imp->setWidth(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLAppletElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLAppletElementConstructor>(exec, "[[HTMLAppletElement.constructor]]");
}

}
