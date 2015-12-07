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

#ifndef JSTreeWalker_H
#define JSTreeWalker_H

#include "kjs_binding.h"

namespace WebCore {

class TreeWalker;

class JSTreeWalker : public KJS::DOMObject {
public:
    JSTreeWalker(KJS::ExecState*, TreeWalker*);
    virtual ~JSTreeWalker();
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier&, KJS::JSValue*, int attr = KJS::None);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*, int attr);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;

    virtual void mark();

    enum {
        // Attributes
        RootAttrNum, WhatToShowAttrNum, FilterAttrNum, ExpandEntityReferencesAttrNum, 
        CurrentNodeAttrNum, 

        // Functions
        ParentNodeFuncNum, FirstChildFuncNum, LastChildFuncNum, PreviousSiblingFuncNum, 
        NextSiblingFuncNum, PreviousNodeFuncNum, NextNodeFuncNum
    };
    TreeWalker* impl() const { return m_impl.get(); }
private:
    RefPtr<TreeWalker> m_impl;
};

KJS::JSValue* toJS(KJS::ExecState*, TreeWalker*);
TreeWalker* toTreeWalker(KJS::JSValue*);

class JSTreeWalkerPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState* exec);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSTreeWalkerPrototype(KJS::ExecState* exec)
        : KJS::JSObject(exec->lexicalInterpreter()->builtinObjectPrototype()) { }
};

class JSTreeWalkerPrototypeFunction : public KJS::InternalFunctionImp {
public:
    JSTreeWalkerPrototypeFunction(KJS::ExecState* exec, int i, int len, const KJS::Identifier& name)
        : KJS::InternalFunctionImp(static_cast<KJS::FunctionPrototype*>(exec->lexicalInterpreter()->builtinFunctionPrototype()), name)
        , id(i)
    {
        put(exec, exec->propertyNames().length, KJS::jsNumber(len), KJS::DontDelete|KJS::ReadOnly|KJS::DontEnum);
    }
    virtual KJS::JSValue* callAsFunction(KJS::ExecState*, KJS::JSObject*, const KJS::List&);

private:
    int id;
};

} // namespace WebCore

#endif
