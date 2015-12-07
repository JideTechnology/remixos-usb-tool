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

#include "JSCSSRule.h"

#include <wtf/GetPtr.h>

#include "CSSRule.h"
#include "CSSStyleSheet.h"
#include "JSCSSRule.h"
#include "JSCSSStyleSheet.h"
#include "KURL.h"

#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSRule)

/* Hash table */

static const HashTableValue JSCSSRuleTableValues[6] =
{
    { "type", DontDelete|ReadOnly, (intptr_t)jsCSSRuleType, (intptr_t)0 },
    { "cssText", DontDelete, (intptr_t)jsCSSRuleCssText, (intptr_t)setJSCSSRuleCssText },
    { "parentStyleSheet", DontDelete|ReadOnly, (intptr_t)jsCSSRuleParentStyleSheet, (intptr_t)0 },
    { "parentRule", DontDelete|ReadOnly, (intptr_t)jsCSSRuleParentRule, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsCSSRuleConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSRuleTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSCSSRuleTableValues, 0 };
#else
    { 17, 15, JSCSSRuleTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSCSSRuleConstructorTableValues[11] =
{
    { "UNKNOWN_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleUNKNOWN_RULE, (intptr_t)0 },
    { "STYLE_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleSTYLE_RULE, (intptr_t)0 },
    { "CHARSET_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleCHARSET_RULE, (intptr_t)0 },
    { "IMPORT_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleIMPORT_RULE, (intptr_t)0 },
    { "MEDIA_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleMEDIA_RULE, (intptr_t)0 },
    { "FONT_FACE_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleFONT_FACE_RULE, (intptr_t)0 },
    { "PAGE_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRulePAGE_RULE, (intptr_t)0 },
    { "VARIABLES_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleVARIABLES_RULE, (intptr_t)0 },
    { "WEBKIT_KEYFRAMES_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleWEBKIT_KEYFRAMES_RULE, (intptr_t)0 },
    { "WEBKIT_KEYFRAME_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleWEBKIT_KEYFRAME_RULE, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSRuleConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSCSSRuleConstructorTableValues, 0 };
#else
    { 34, 31, JSCSSRuleConstructorTableValues, 0 };
#endif

class JSCSSRuleConstructor : public DOMObject {
public:
    JSCSSRuleConstructor(ExecState* exec)
        : DOMObject(JSCSSRuleConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSCSSRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSCSSRuleConstructor::s_info = { "CSSRuleConstructor", 0, &JSCSSRuleConstructorTable, 0 };

bool JSCSSRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSRuleConstructor, DOMObject>(exec, &JSCSSRuleConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSCSSRulePrototypeTableValues[11] =
{
    { "UNKNOWN_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleUNKNOWN_RULE, (intptr_t)0 },
    { "STYLE_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleSTYLE_RULE, (intptr_t)0 },
    { "CHARSET_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleCHARSET_RULE, (intptr_t)0 },
    { "IMPORT_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleIMPORT_RULE, (intptr_t)0 },
    { "MEDIA_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleMEDIA_RULE, (intptr_t)0 },
    { "FONT_FACE_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleFONT_FACE_RULE, (intptr_t)0 },
    { "PAGE_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRulePAGE_RULE, (intptr_t)0 },
    { "VARIABLES_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleVARIABLES_RULE, (intptr_t)0 },
    { "WEBKIT_KEYFRAMES_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleWEBKIT_KEYFRAMES_RULE, (intptr_t)0 },
    { "WEBKIT_KEYFRAME_RULE", DontDelete|ReadOnly, (intptr_t)jsCSSRuleWEBKIT_KEYFRAME_RULE, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSRulePrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSCSSRulePrototypeTableValues, 0 };
#else
    { 34, 31, JSCSSRulePrototypeTableValues, 0 };
#endif

const ClassInfo JSCSSRulePrototype::s_info = { "CSSRulePrototype", 0, &JSCSSRulePrototypeTable, 0 };

JSObject* JSCSSRulePrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSCSSRule>(exec);
}

bool JSCSSRulePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSRulePrototype, JSObject>(exec, &JSCSSRulePrototypeTable, this, propertyName, slot);
}

const ClassInfo JSCSSRule::s_info = { "CSSRule", 0, &JSCSSRuleTable, 0 };

JSCSSRule::JSCSSRule(PassRefPtr<Structure> structure, PassRefPtr<CSSRule> impl)
    : DOMObject(structure)
    , m_impl(impl)
{
}

JSCSSRule::~JSCSSRule()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());

}

JSObject* JSCSSRule::createPrototype(ExecState* exec)
{
    return new (exec) JSCSSRulePrototype(JSCSSRulePrototype::createStructure(exec->lexicalGlobalObject()->objectPrototype()));
}

bool JSCSSRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSRule, Base>(exec, &JSCSSRuleTable, this, propertyName, slot);
}

JSValuePtr jsCSSRuleType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    CSSRule* imp = static_cast<CSSRule*>(static_cast<JSCSSRule*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->type());
}

JSValuePtr jsCSSRuleCssText(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    CSSRule* imp = static_cast<CSSRule*>(static_cast<JSCSSRule*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->cssText());
}

JSValuePtr jsCSSRuleParentStyleSheet(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    CSSRule* imp = static_cast<CSSRule*>(static_cast<JSCSSRule*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->parentStyleSheet()));
}

JSValuePtr jsCSSRuleParentRule(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    CSSRule* imp = static_cast<CSSRule*>(static_cast<JSCSSRule*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->parentRule()));
}

JSValuePtr jsCSSRuleConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSCSSRule*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSCSSRule::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSCSSRule, Base>(exec, propertyName, value, &JSCSSRuleTable, this, slot);
}

void setJSCSSRuleCssText(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    CSSRule* imp = static_cast<CSSRule*>(static_cast<JSCSSRule*>(thisObject)->impl());
    ExceptionCode ec = 0;
    imp->setCssText(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

JSValuePtr JSCSSRule::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSCSSRuleConstructor>(exec);
}

// Constant getters

JSValuePtr jsCSSRuleUNKNOWN_RULE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValuePtr jsCSSRuleSTYLE_RULE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValuePtr jsCSSRuleCHARSET_RULE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValuePtr jsCSSRuleIMPORT_RULE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSValuePtr jsCSSRuleMEDIA_RULE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(4));
}

JSValuePtr jsCSSRuleFONT_FACE_RULE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(5));
}

JSValuePtr jsCSSRulePAGE_RULE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(6));
}

JSValuePtr jsCSSRuleVARIABLES_RULE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(7));
}

JSValuePtr jsCSSRuleWEBKIT_KEYFRAMES_RULE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(8));
}

JSValuePtr jsCSSRuleWEBKIT_KEYFRAME_RULE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(9));
}

CSSRule* toCSSRule(JSC::JSValuePtr value)
{
    return value->isObject(&JSCSSRule::s_info) ? static_cast<JSCSSRule*>(asObject(value))->impl() : 0;
}

}
