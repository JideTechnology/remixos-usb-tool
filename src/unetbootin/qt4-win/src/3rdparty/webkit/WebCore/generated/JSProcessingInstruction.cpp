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

#include "JSProcessingInstruction.h"

#include <wtf/GetPtr.h>

#include "JSStyleSheet.h"
#include "PlatformString.h"
#include "ProcessingInstruction.h"
#include "StyleSheet.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSProcessingInstructionTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "constructor", JSProcessingInstruction::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 },
    { "target", JSProcessingInstruction::TargetAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "data", JSProcessingInstruction::DataAttrNum, DontDelete, 0, &JSProcessingInstructionTableEntries[4] },
    { "sheet", JSProcessingInstruction::SheetAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSProcessingInstructionTable = 
{
    2, 5, JSProcessingInstructionTableEntries, 4
};

/* Hash table for constructor */

static const HashEntry JSProcessingInstructionConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSProcessingInstructionConstructorTable = 
{
    2, 1, JSProcessingInstructionConstructorTableEntries, 1
};

class JSProcessingInstructionConstructor : public DOMObject {
public:
    JSProcessingInstructionConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSProcessingInstructionPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSProcessingInstructionConstructor::info = { "ProcessingInstructionConstructor", 0, &JSProcessingInstructionConstructorTable, 0 };

bool JSProcessingInstructionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSProcessingInstructionConstructor, DOMObject>(exec, &JSProcessingInstructionConstructorTable, this, propertyName, slot);
}

JSValue* JSProcessingInstructionConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSProcessingInstructionPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSProcessingInstructionPrototypeTable = 
{
    2, 1, JSProcessingInstructionPrototypeTableEntries, 1
};

const ClassInfo JSProcessingInstructionPrototype::info = { "ProcessingInstructionPrototype", 0, &JSProcessingInstructionPrototypeTable, 0 };

JSObject* JSProcessingInstructionPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSProcessingInstructionPrototype>(exec, "[[JSProcessingInstruction.prototype]]");
}

const ClassInfo JSProcessingInstruction::info = { "ProcessingInstruction", &JSNode::info, &JSProcessingInstructionTable, 0 };

JSProcessingInstruction::JSProcessingInstruction(ExecState* exec, ProcessingInstruction* impl)
    : JSNode(exec, impl)
{
    setPrototype(JSProcessingInstructionPrototype::self(exec));
}

bool JSProcessingInstruction::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSProcessingInstruction, JSNode>(exec, &JSProcessingInstructionTable, this, propertyName, slot);
}

JSValue* JSProcessingInstruction::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TargetAttrNum: {
        ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(impl());

        return jsStringOrNull(imp->target());
    }
    case DataAttrNum: {
        ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(impl());

        return jsStringOrNull(imp->data());
    }
    case SheetAttrNum: {
        ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(impl());

        return toJS(exec, WTF::getPtr(imp->sheet()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSProcessingInstruction::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSProcessingInstruction, JSNode>(exec, propertyName, value, attr, &JSProcessingInstructionTable, this);
}

void JSProcessingInstruction::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case DataAttrNum: {
        ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(impl());

        ExceptionCode ec = 0;
        imp->setData(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    }
}

JSValue* JSProcessingInstruction::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSProcessingInstructionConstructor>(exec, "[[ProcessingInstruction.constructor]]");
}

}
