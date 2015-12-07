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

#include "JSCSSMediaRule.h"

#include <wtf/GetPtr.h>

#include "CSSMediaRule.h"
#include "CSSRuleList.h"
#include "ExceptionCode.h"
#include "JSCSSRuleList.h"
#include "JSMediaList.h"
#include "MediaList.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSCSSMediaRuleTableEntries[] =
{
    { "media", JSCSSMediaRule::MediaAttrNum, DontDelete|ReadOnly, 0, &JSCSSMediaRuleTableEntries[3] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "cssRules", JSCSSMediaRule::CssRulesAttrNum, DontDelete|ReadOnly, 0, &JSCSSMediaRuleTableEntries[4] },
    { "constructor", JSCSSMediaRule::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSCSSMediaRuleTable = 
{
    2, 5, JSCSSMediaRuleTableEntries, 3
};

/* Hash table for constructor */

static const HashEntry JSCSSMediaRuleConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSCSSMediaRuleConstructorTable = 
{
    2, 1, JSCSSMediaRuleConstructorTableEntries, 1
};

class JSCSSMediaRuleConstructor : public DOMObject {
public:
    JSCSSMediaRuleConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSCSSMediaRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSMediaRuleConstructor::info = { "CSSMediaRuleConstructor", 0, &JSCSSMediaRuleConstructorTable, 0 };

bool JSCSSMediaRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSMediaRuleConstructor, DOMObject>(exec, &JSCSSMediaRuleConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSMediaRuleConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSCSSMediaRulePrototypeTableEntries[] =
{
    { "insertRule", JSCSSMediaRule::InsertRuleFuncNum, DontDelete|Function, 2, 0 },
    { "deleteRule", JSCSSMediaRule::DeleteRuleFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSCSSMediaRulePrototypeTable = 
{
    2, 2, JSCSSMediaRulePrototypeTableEntries, 2
};

const ClassInfo JSCSSMediaRulePrototype::info = { "CSSMediaRulePrototype", 0, &JSCSSMediaRulePrototypeTable, 0 };

JSObject* JSCSSMediaRulePrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCSSMediaRulePrototype>(exec, "[[JSCSSMediaRule.prototype]]");
}

bool JSCSSMediaRulePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSCSSMediaRulePrototypeFunction, JSObject>(exec, &JSCSSMediaRulePrototypeTable, this, propertyName, slot);
}

const ClassInfo JSCSSMediaRule::info = { "CSSMediaRule", &JSCSSRule::info, &JSCSSMediaRuleTable, 0 };

JSCSSMediaRule::JSCSSMediaRule(ExecState* exec, CSSMediaRule* impl)
    : JSCSSRule(exec, impl)
{
    setPrototype(JSCSSMediaRulePrototype::self(exec));
}

bool JSCSSMediaRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSMediaRule, JSCSSRule>(exec, &JSCSSMediaRuleTable, this, propertyName, slot);
}

JSValue* JSCSSMediaRule::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case MediaAttrNum: {
        CSSMediaRule* imp = static_cast<CSSMediaRule*>(impl());

        return toJS(exec, WTF::getPtr(imp->media()));
    }
    case CssRulesAttrNum: {
        CSSMediaRule* imp = static_cast<CSSMediaRule*>(impl());

        return toJS(exec, WTF::getPtr(imp->cssRules()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSCSSMediaRule::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCSSMediaRuleConstructor>(exec, "[[CSSMediaRule.constructor]]");
}
JSValue* JSCSSMediaRulePrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSCSSMediaRule::info))
      return throwError(exec, TypeError);

    CSSMediaRule* imp = static_cast<CSSMediaRule*>(static_cast<JSCSSMediaRule*>(thisObj)->impl());

    switch (id) {
    case JSCSSMediaRule::InsertRuleFuncNum: {
        ExceptionCode ec = 0;
        String rule = args[0]->toString(exec);
        bool indexOk;
        unsigned index = args[1]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }


        KJS::JSValue* result = jsNumber(imp->insertRule(rule, index, ec));
        setDOMException(exec, ec);
        return result;
    }
    case JSCSSMediaRule::DeleteRuleFuncNum: {
        ExceptionCode ec = 0;
        bool indexOk;
        unsigned index = args[0]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }

        imp->deleteRule(index, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    }
    return 0;
}

}
