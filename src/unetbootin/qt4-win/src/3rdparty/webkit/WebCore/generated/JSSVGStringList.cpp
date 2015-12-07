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


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGStringList.h"

#include <wtf/GetPtr.h>

#include "ExceptionCode.h"
#include "PlatformString.h"
#include "SVGStringList.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGStringListTableEntries[] =
{
    { "numberOfItems", JSSVGStringList::NumberOfItemsAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGStringListTable = 
{
    2, 1, JSSVGStringListTableEntries, 1
};

/* Hash table for prototype */

static const HashEntry JSSVGStringListPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "clear", JSSVGStringList::ClearFuncNum, DontDelete|Function, 0, &JSSVGStringListPrototypeTableEntries[9] },
    { "getItem", JSSVGStringList::GetItemFuncNum, DontDelete|Function, 1, &JSSVGStringListPrototypeTableEntries[7] },
    { "insertItemBefore", JSSVGStringList::InsertItemBeforeFuncNum, DontDelete|Function, 2, &JSSVGStringListPrototypeTableEntries[8] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "initialize", JSSVGStringList::InitializeFuncNum, DontDelete|Function, 1, 0 },
    { "replaceItem", JSSVGStringList::ReplaceItemFuncNum, DontDelete|Function, 2, 0 },
    { "removeItem", JSSVGStringList::RemoveItemFuncNum, DontDelete|Function, 1, 0 },
    { "appendItem", JSSVGStringList::AppendItemFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSSVGStringListPrototypeTable = 
{
    2, 10, JSSVGStringListPrototypeTableEntries, 7
};

const ClassInfo JSSVGStringListPrototype::info = { "SVGStringListPrototype", 0, &JSSVGStringListPrototypeTable, 0 };

JSObject* JSSVGStringListPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGStringListPrototype>(exec, "[[JSSVGStringList.prototype]]");
}

bool JSSVGStringListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGStringListPrototypeFunction, JSObject>(exec, &JSSVGStringListPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGStringList::info = { "SVGStringList", 0, &JSSVGStringListTable, 0 };

JSSVGStringList::JSSVGStringList(ExecState* exec, SVGStringList* impl)
    : m_impl(impl)
{
    setPrototype(JSSVGStringListPrototype::self(exec));
}

JSSVGStringList::~JSSVGStringList()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSSVGStringList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGStringList, KJS::DOMObject>(exec, &JSSVGStringListTable, this, propertyName, slot);
}

JSValue* JSSVGStringList::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NumberOfItemsAttrNum: {
        SVGStringList* imp = static_cast<SVGStringList*>(impl());

        return jsNumber(imp->numberOfItems());
    }
    }
    return 0;
}

JSValue* JSSVGStringListPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGStringList::info))
      return throwError(exec, TypeError);

    SVGStringList* imp = static_cast<SVGStringList*>(static_cast<JSSVGStringList*>(thisObj)->impl());

    switch (id) {
    case JSSVGStringList::ClearFuncNum: {
        ExceptionCode ec = 0;

        imp->clear(ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSSVGStringList::InitializeFuncNum: {
        ExceptionCode ec = 0;
        String item = args[0]->toString(exec);


        KJS::JSValue* result = jsString(imp->initialize(item, ec));
        setDOMException(exec, ec);
        return result;
    }
    case JSSVGStringList::GetItemFuncNum: {
        ExceptionCode ec = 0;
        bool indexOk;
        unsigned index = args[0]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }


        KJS::JSValue* result = jsString(imp->getItem(index, ec));
        setDOMException(exec, ec);
        return result;
    }
    case JSSVGStringList::InsertItemBeforeFuncNum: {
        ExceptionCode ec = 0;
        String item = args[0]->toString(exec);
        bool indexOk;
        unsigned index = args[1]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }


        KJS::JSValue* result = jsString(imp->insertItemBefore(item, index, ec));
        setDOMException(exec, ec);
        return result;
    }
    case JSSVGStringList::ReplaceItemFuncNum: {
        ExceptionCode ec = 0;
        String item = args[0]->toString(exec);
        bool indexOk;
        unsigned index = args[1]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }


        KJS::JSValue* result = jsString(imp->replaceItem(item, index, ec));
        setDOMException(exec, ec);
        return result;
    }
    case JSSVGStringList::RemoveItemFuncNum: {
        ExceptionCode ec = 0;
        bool indexOk;
        unsigned index = args[0]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }


        KJS::JSValue* result = jsString(imp->removeItem(index, ec));
        setDOMException(exec, ec);
        return result;
    }
    case JSSVGStringList::AppendItemFuncNum: {
        ExceptionCode ec = 0;
        String item = args[0]->toString(exec);


        KJS::JSValue* result = jsString(imp->appendItem(item, ec));
        setDOMException(exec, ec);
        return result;
    }
    }
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, SVGStringList* obj)
{
    return KJS::cacheDOMObject<SVGStringList, JSSVGStringList>(exec, obj);
}
SVGStringList* toSVGStringList(KJS::JSValue* val)
{
    return val->isObject(&JSSVGStringList::info) ? static_cast<JSSVGStringList*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)
