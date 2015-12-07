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

#ifndef JSSVGElementInstance_H
#define JSSVGElementInstance_H


#if ENABLE(SVG)

#include "kjs_binding.h"

namespace WebCore {

class SVGElementInstance;

class JSSVGElementInstance : public KJS::DOMObject {
public:
    JSSVGElementInstance(KJS::ExecState*, SVGElementInstance*);
    virtual ~JSSVGElementInstance();
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;

    enum {
        // Attributes
        CorrespondingElementAttrNum, CorrespondingUseElementAttrNum, ParentNodeAttrNum, ChildNodesAttrNum, 
        FirstChildAttrNum, LastChildAttrNum, PreviousSiblingAttrNum, NextSiblingAttrNum
    };
    SVGElementInstance* impl() const { return m_impl.get(); }
private:
    RefPtr<SVGElementInstance> m_impl;
};

KJS::JSValue* toJS(KJS::ExecState*, SVGElementInstance*);
SVGElementInstance* toSVGElementInstance(KJS::JSValue*);

class JSSVGElementInstancePrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState* exec);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;
    JSSVGElementInstancePrototype(KJS::ExecState* exec)
        : KJS::JSObject(exec->lexicalInterpreter()->builtinObjectPrototype()) { }
};

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
