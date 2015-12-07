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

#include "JSRangeException.h"

#include <wtf/GetPtr.h>

#include "RangeException.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSRangeExceptionTableEntries[] =
{
    { "constructor", JSRangeException::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSRangeExceptionTable = 
{
    2, 1, JSRangeExceptionTableEntries, 1
};

/* Hash table for constructor */

static const HashEntry JSRangeExceptionConstructorTableEntries[] =
{
    { "BAD_BOUNDARYPOINTS_ERR", RangeException::BAD_BOUNDARYPOINTS_ERR, DontDelete|ReadOnly, 0, 0 },
    { "INVALID_NODE_TYPE_ERR", RangeException::INVALID_NODE_TYPE_ERR, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSRangeExceptionConstructorTable = 
{
    2, 2, JSRangeExceptionConstructorTableEntries, 2
};

class JSRangeExceptionConstructor : public DOMObject {
public:
    JSRangeExceptionConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSRangeExceptionPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSRangeExceptionConstructor::info = { "RangeExceptionConstructor", 0, &JSRangeExceptionConstructorTable, 0 };

bool JSRangeExceptionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRangeExceptionConstructor, DOMObject>(exec, &JSRangeExceptionConstructorTable, this, propertyName, slot);
}

JSValue* JSRangeExceptionConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSRangeExceptionPrototypeTableEntries[] =
{
    { "BAD_BOUNDARYPOINTS_ERR", RangeException::BAD_BOUNDARYPOINTS_ERR, DontDelete|ReadOnly, 0, 0 },
    { "INVALID_NODE_TYPE_ERR", RangeException::INVALID_NODE_TYPE_ERR, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSRangeExceptionPrototypeTable = 
{
    2, 2, JSRangeExceptionPrototypeTableEntries, 2
};

const ClassInfo JSRangeExceptionPrototype::info = { "RangeExceptionPrototype", 0, &JSRangeExceptionPrototypeTable, 0 };

JSObject* JSRangeExceptionPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSRangeExceptionPrototype>(exec, "[[JSRangeException.prototype]]");
}

bool JSRangeExceptionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRangeExceptionPrototype, JSObject>(exec, &JSRangeExceptionPrototypeTable, this, propertyName, slot);
}

JSValue* JSRangeExceptionPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSRangeException::info = { "RangeException", 0, &JSRangeExceptionTable, 0 };

JSRangeException::JSRangeException(ExecState* exec, RangeException* impl)
    : m_impl(impl)
{
    setPrototype(JSRangeExceptionPrototype::self(exec));
}

JSRangeException::~JSRangeException()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSRangeException::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRangeException, KJS::DOMObject>(exec, &JSRangeExceptionTable, this, propertyName, slot);
}

JSValue* JSRangeException::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSRangeException::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSRangeExceptionConstructor>(exec, "[[RangeException.constructor]]");
}
KJS::JSValue* toJS(KJS::ExecState* exec, RangeException* obj)
{
    return KJS::cacheDOMObject<RangeException, JSRangeException>(exec, obj);
}
RangeException* toRangeException(KJS::JSValue* val)
{
    return val->isObject(&JSRangeException::info) ? static_cast<JSRangeException*>(val)->impl() : 0;
}

}
