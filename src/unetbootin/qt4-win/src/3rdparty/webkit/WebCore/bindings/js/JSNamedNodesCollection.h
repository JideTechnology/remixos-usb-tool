/*
 * Copyright (C) 2007 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#ifndef JSNamedNodesCollection_h
#define JSNamedNodesCollection_h

#include "kjs_binding.h"
#include <wtf/Vector.h>

namespace WebCore {

    class Node;

    // Internal class, used for the collection return by e.g. document.forms.myinput
    // when multiple nodes have the same name.
    class JSNamedNodesCollection : public KJS::DOMObject {
    public:
        JSNamedNodesCollection(KJS::ExecState*, const Vector<RefPtr<Node> >&);

        virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);

        virtual const KJS::ClassInfo* classInfo() const { return &info; }
        static const KJS::ClassInfo info;

    private:
        static KJS::JSValue* lengthGetter(KJS::ExecState*, KJS::JSObject*, const KJS::Identifier&, const KJS::PropertySlot&);
        static KJS::JSValue* indexGetter(KJS::ExecState*, KJS::JSObject*, const KJS::Identifier&, const KJS::PropertySlot&);

        Vector<RefPtr<Node> > m_nodes;
    };

} // namespace WebCore

#endif // JSNamedNodesCollection_h
