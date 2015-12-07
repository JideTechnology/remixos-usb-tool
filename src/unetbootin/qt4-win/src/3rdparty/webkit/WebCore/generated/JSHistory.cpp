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

#include "JSHistory.h"

#include <wtf/GetPtr.h>

#include "ExceptionCode.h"
#include "History.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHistoryTableEntries[] =
{
    { "length", JSHistory::LengthAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSHistoryTable = 
{
    2, 1, JSHistoryTableEntries, 1
};

/* Hash table for prototype */

static const HashEntry JSHistoryPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "forward", JSHistory::ForwardFuncNum, DontDelete|Function, 0, 0 },
    { "back", JSHistory::BackFuncNum, DontDelete|Function, 0, &JSHistoryPrototypeTableEntries[3] },
    { "go", JSHistory::GoFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSHistoryPrototypeTable = 
{
    2, 4, JSHistoryPrototypeTableEntries, 3
};

const ClassInfo JSHistoryPrototype::info = { "HistoryPrototype", 0, &JSHistoryPrototypeTable, 0 };

JSObject* JSHistoryPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHistoryPrototype>(exec, "[[JSHistory.prototype]]");
}

bool JSHistoryPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSHistoryPrototypeFunction, JSObject>(exec, &JSHistoryPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHistory::info = { "History", 0, &JSHistoryTable, 0 };

JSHistory::JSHistory(ExecState* exec, History* impl)
    : m_impl(impl)
{
    setPrototype(JSHistoryPrototype::self(exec));
}

JSHistory::~JSHistory()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSHistory::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHistory, KJS::DOMObject>(exec, &JSHistoryTable, this, propertyName, slot);
}

JSValue* JSHistory::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case LengthAttrNum: {
        History* imp = static_cast<History*>(impl());

        return jsNumber(imp->length());
    }
    }
    return 0;
}

JSValue* JSHistoryPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSHistory::info))
      return throwError(exec, TypeError);

    History* imp = static_cast<History*>(static_cast<JSHistory*>(thisObj)->impl());

    switch (id) {
    case JSHistory::BackFuncNum: {

        imp->back();
        return jsUndefined();
    }
    case JSHistory::ForwardFuncNum: {

        imp->forward();
        return jsUndefined();
    }
    case JSHistory::GoFuncNum: {
        bool distanceOk;
        int distance = args[0]->toInt32(exec, distanceOk);
        if (!distanceOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }

        imp->go(distance);
        return jsUndefined();
    }
    }
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, History* obj)
{
    return KJS::cacheDOMObject<History, JSHistory>(exec, obj);
}
History* toHistory(KJS::JSValue* val)
{
    return val->isObject(&JSHistory::info) ? static_cast<JSHistory*>(val)->impl() : 0;
}

}
