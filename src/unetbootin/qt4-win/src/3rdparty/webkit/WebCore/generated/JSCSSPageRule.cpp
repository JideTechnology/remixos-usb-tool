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

#include "JSCSSPageRule.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSPageRule.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSCSSPageRuleTableEntries[] =
{
    { "selectorText", JSCSSPageRule::SelectorTextAttrNum, DontDelete, 0, &JSCSSPageRuleTableEntries[3] },
    { 0, 0, 0, 0, 0 },
    { "style", JSCSSPageRule::StyleAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "constructor", JSCSSPageRule::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSCSSPageRuleTable = 
{
    2, 4, JSCSSPageRuleTableEntries, 3
};

/* Hash table for constructor */

static const HashEntry JSCSSPageRuleConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSCSSPageRuleConstructorTable = 
{
    2, 1, JSCSSPageRuleConstructorTableEntries, 1
};

class JSCSSPageRuleConstructor : public DOMObject {
public:
    JSCSSPageRuleConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSCSSPageRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSPageRuleConstructor::info = { "CSSPageRuleConstructor", 0, &JSCSSPageRuleConstructorTable, 0 };

bool JSCSSPageRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPageRuleConstructor, DOMObject>(exec, &JSCSSPageRuleConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSPageRuleConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSCSSPageRulePrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSCSSPageRulePrototypeTable = 
{
    2, 1, JSCSSPageRulePrototypeTableEntries, 1
};

const ClassInfo JSCSSPageRulePrototype::info = { "CSSPageRulePrototype", 0, &JSCSSPageRulePrototypeTable, 0 };

JSObject* JSCSSPageRulePrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCSSPageRulePrototype>(exec, "[[JSCSSPageRule.prototype]]");
}

const ClassInfo JSCSSPageRule::info = { "CSSPageRule", &JSCSSRule::info, &JSCSSPageRuleTable, 0 };

JSCSSPageRule::JSCSSPageRule(ExecState* exec, CSSPageRule* impl)
    : JSCSSRule(exec, impl)
{
    setPrototype(JSCSSPageRulePrototype::self(exec));
}

bool JSCSSPageRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPageRule, JSCSSRule>(exec, &JSCSSPageRuleTable, this, propertyName, slot);
}

JSValue* JSCSSPageRule::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case SelectorTextAttrNum: {
        CSSPageRule* imp = static_cast<CSSPageRule*>(impl());

        return jsStringOrNull(imp->selectorText());
    }
    case StyleAttrNum: {
        CSSPageRule* imp = static_cast<CSSPageRule*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSCSSPageRule::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSCSSPageRule, JSCSSRule>(exec, propertyName, value, attr, &JSCSSPageRuleTable, this);
}

void JSCSSPageRule::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case SelectorTextAttrNum: {
        CSSPageRule* imp = static_cast<CSSPageRule*>(impl());

        ExceptionCode ec = 0;
        imp->setSelectorText(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    }
}

JSValue* JSCSSPageRule::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCSSPageRuleConstructor>(exec, "[[CSSPageRule.constructor]]");
}

}
