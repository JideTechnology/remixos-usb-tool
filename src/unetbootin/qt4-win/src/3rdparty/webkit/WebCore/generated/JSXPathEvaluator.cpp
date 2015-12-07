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


#if ENABLE(XPATH)

#include "JSXPathEvaluator.h"

#include <wtf/GetPtr.h>

#include "JSCustomXPathNSResolver.h"
#include "JSNode.h"
#include "JSXPathExpression.h"
#include "JSXPathNSResolver.h"
#include "JSXPathResult.h"
#include "PlatformString.h"
#include "XPathEvaluator.h"
#include "XPathExpression.h"
#include "XPathNSResolver.h"
#include "XPathResult.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSXPathEvaluatorTableEntries[] =
{
    { "constructor", JSXPathEvaluator::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSXPathEvaluatorTable = 
{
    2, 1, JSXPathEvaluatorTableEntries, 1
};

/* Hash table for constructor */

static const HashEntry JSXPathEvaluatorConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSXPathEvaluatorConstructorTable = 
{
    2, 1, JSXPathEvaluatorConstructorTableEntries, 1
};

class JSXPathEvaluatorConstructor : public DOMObject {
public:
    JSXPathEvaluatorConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSXPathEvaluatorPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
    virtual bool implementsConstruct() const { return true; }
    virtual JSObject* construct(ExecState* exec, const List& args) { return static_cast<JSObject*>(toJS(exec, new XPathEvaluator)); }
};

const ClassInfo JSXPathEvaluatorConstructor::info = { "XPathEvaluatorConstructor", 0, &JSXPathEvaluatorConstructorTable, 0 };

bool JSXPathEvaluatorConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXPathEvaluatorConstructor, DOMObject>(exec, &JSXPathEvaluatorConstructorTable, this, propertyName, slot);
}

JSValue* JSXPathEvaluatorConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSXPathEvaluatorPrototypeTableEntries[] =
{
    { "evaluate", JSXPathEvaluator::EvaluateFuncNum, DontDelete|Function, 5, 0 },
    { 0, 0, 0, 0, 0 },
    { "createExpression", JSXPathEvaluator::CreateExpressionFuncNum, DontDelete|Function, 2, &JSXPathEvaluatorPrototypeTableEntries[3] },
    { "createNSResolver", JSXPathEvaluator::CreateNSResolverFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSXPathEvaluatorPrototypeTable = 
{
    2, 4, JSXPathEvaluatorPrototypeTableEntries, 3
};

const ClassInfo JSXPathEvaluatorPrototype::info = { "XPathEvaluatorPrototype", 0, &JSXPathEvaluatorPrototypeTable, 0 };

JSObject* JSXPathEvaluatorPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSXPathEvaluatorPrototype>(exec, "[[JSXPathEvaluator.prototype]]");
}

bool JSXPathEvaluatorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSXPathEvaluatorPrototypeFunction, JSObject>(exec, &JSXPathEvaluatorPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSXPathEvaluator::info = { "XPathEvaluator", 0, &JSXPathEvaluatorTable, 0 };

JSXPathEvaluator::JSXPathEvaluator(ExecState* exec, XPathEvaluator* impl)
    : m_impl(impl)
{
    setPrototype(JSXPathEvaluatorPrototype::self(exec));
}

JSXPathEvaluator::~JSXPathEvaluator()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSXPathEvaluator::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXPathEvaluator, KJS::DOMObject>(exec, &JSXPathEvaluatorTable, this, propertyName, slot);
}

JSValue* JSXPathEvaluator::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSXPathEvaluator::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSXPathEvaluatorConstructor>(exec, "[[XPathEvaluator.constructor]]");
}
JSValue* JSXPathEvaluatorPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSXPathEvaluator::info))
      return throwError(exec, TypeError);

    XPathEvaluator* imp = static_cast<XPathEvaluator*>(static_cast<JSXPathEvaluator*>(thisObj)->impl());

    switch (id) {
    case JSXPathEvaluator::CreateExpressionFuncNum: {
        ExceptionCode ec = 0;
        String expression = args[0]->toString(exec);
        RefPtr<XPathNSResolver> customResolver;
        XPathNSResolver* resolver = toXPathNSResolver(args[1]);
        if (!resolver) {
            customResolver = JSCustomXPathNSResolver::create(exec, args[1]);
            if (exec->hadException())
                return jsUndefined();
            resolver = customResolver.get();
        }


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->createExpression(expression, resolver, ec)));
        setDOMException(exec, ec);
        return result;
    }
    case JSXPathEvaluator::CreateNSResolverFuncNum: {
        Node* nodeResolver = toNode(args[0]);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->createNSResolver(nodeResolver)));
        return result;
    }
    case JSXPathEvaluator::EvaluateFuncNum: {
        ExceptionCode ec = 0;
        String expression = args[0]->toString(exec);
        Node* contextNode = toNode(args[1]);
        RefPtr<XPathNSResolver> customResolver;
        XPathNSResolver* resolver = toXPathNSResolver(args[2]);
        if (!resolver) {
            customResolver = JSCustomXPathNSResolver::create(exec, args[2]);
            if (exec->hadException())
                return jsUndefined();
            resolver = customResolver.get();
        }
        unsigned short type = args[3]->toInt32(exec);
        XPathResult* inResult = toXPathResult(args[4]);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->evaluate(expression, contextNode, resolver, type, inResult, ec)));
        setDOMException(exec, ec);
        return result;
    }
    }
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, XPathEvaluator* obj)
{
    return KJS::cacheDOMObject<XPathEvaluator, JSXPathEvaluator>(exec, obj);
}
XPathEvaluator* toXPathEvaluator(KJS::JSValue* val)
{
    return val->isObject(&JSXPathEvaluator::info) ? static_cast<JSXPathEvaluator*>(val)->impl() : 0;
}

}

#endif // ENABLE(XPATH)
