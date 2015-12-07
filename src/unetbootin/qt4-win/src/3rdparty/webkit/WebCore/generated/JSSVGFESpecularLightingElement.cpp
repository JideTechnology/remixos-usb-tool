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


#if ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFESpecularLightingElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFESpecularLightingElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGFESpecularLightingElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "x", JSSVGFESpecularLightingElement::XAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "specularConstant", JSSVGFESpecularLightingElement::SpecularConstantAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "height", JSSVGFESpecularLightingElement::HeightAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "className", JSSVGFESpecularLightingElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "surfaceScale", JSSVGFESpecularLightingElement::SurfaceScaleAttrNum, DontDelete|ReadOnly, 0, &JSSVGFESpecularLightingElementTableEntries[11] },
    { "in1", JSSVGFESpecularLightingElement::In1AttrNum, DontDelete|ReadOnly, 0, &JSSVGFESpecularLightingElementTableEntries[13] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "result", JSSVGFESpecularLightingElement::ResultAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "specularExponent", JSSVGFESpecularLightingElement::SpecularExponentAttrNum, DontDelete|ReadOnly, 0, &JSSVGFESpecularLightingElementTableEntries[12] },
    { "y", JSSVGFESpecularLightingElement::YAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "width", JSSVGFESpecularLightingElement::WidthAttrNum, DontDelete|ReadOnly, 0, &JSSVGFESpecularLightingElementTableEntries[14] },
    { "style", JSSVGFESpecularLightingElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFESpecularLightingElementTable = 
{
    2, 15, JSSVGFESpecularLightingElementTableEntries, 11
};

/* Hash table for prototype */

static const HashEntry JSSVGFESpecularLightingElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSSVGFESpecularLightingElementPrototypeTable = 
{
    2, 1, JSSVGFESpecularLightingElementPrototypeTableEntries, 1
};

const ClassInfo JSSVGFESpecularLightingElementPrototype::info = { "SVGFESpecularLightingElementPrototype", 0, &JSSVGFESpecularLightingElementPrototypeTable, 0 };

JSObject* JSSVGFESpecularLightingElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGFESpecularLightingElementPrototype>(exec, "[[JSSVGFESpecularLightingElement.prototype]]");
}

const ClassInfo JSSVGFESpecularLightingElement::info = { "SVGFESpecularLightingElement", &JSSVGElement::info, &JSSVGFESpecularLightingElementTable, 0 };

JSSVGFESpecularLightingElement::JSSVGFESpecularLightingElement(ExecState* exec, SVGFESpecularLightingElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGFESpecularLightingElementPrototype::self(exec));
}

bool JSSVGFESpecularLightingElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFESpecularLightingElement, JSSVGElement>(exec, &JSSVGFESpecularLightingElementTable, this, propertyName, slot);
}

JSValue* JSSVGFESpecularLightingElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case In1AttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->in1Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case SurfaceScaleAttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->surfaceScaleAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case SpecularConstantAttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->specularConstantAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case SpecularExponentAttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->specularExponentAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case XAttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case YAttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case WidthAttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case HeightAttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ResultAttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ClassNameAttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case StyleAttrNum: {
        SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)
