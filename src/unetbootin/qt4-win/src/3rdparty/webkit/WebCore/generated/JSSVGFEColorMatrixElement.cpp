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
#include "JSSVGFEColorMatrixElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumberList.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEColorMatrixElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGFEColorMatrixElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "width", JSSVGFEColorMatrixElement::WidthAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "type", JSSVGFEColorMatrixElement::TypeAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEColorMatrixElementTableEntries[10] },
    { "values", JSSVGFEColorMatrixElement::ValuesAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "in1", JSSVGFEColorMatrixElement::In1AttrNum, DontDelete|ReadOnly, 0, &JSSVGFEColorMatrixElementTableEntries[11] },
    { "height", JSSVGFEColorMatrixElement::HeightAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "result", JSSVGFEColorMatrixElement::ResultAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "x", JSSVGFEColorMatrixElement::XAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "y", JSSVGFEColorMatrixElement::YAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEColorMatrixElementTableEntries[12] },
    { "className", JSSVGFEColorMatrixElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEColorMatrixElementTableEntries[13] },
    { "style", JSSVGFEColorMatrixElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFEColorMatrixElementTable = 
{
    2, 14, JSSVGFEColorMatrixElementTableEntries, 10
};

/* Hash table for prototype */

static const HashEntry JSSVGFEColorMatrixElementPrototypeTableEntries[] =
{
    { "SVG_FECOLORMATRIX_TYPE_UNKNOWN", WebCore::SVG_FECOLORMATRIX_TYPE_UNKNOWN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_FECOLORMATRIX_TYPE_SATURATE", WebCore::SVG_FECOLORMATRIX_TYPE_SATURATE, DontDelete|ReadOnly, 0, &JSSVGFEColorMatrixElementPrototypeTableEntries[5] },
    { 0, 0, 0, 0, 0 },
    { "SVG_FECOLORMATRIX_TYPE_MATRIX", WebCore::SVG_FECOLORMATRIX_TYPE_MATRIX, DontDelete|ReadOnly, 0, 0 },
    { "SVG_FECOLORMATRIX_TYPE_HUEROTATE", WebCore::SVG_FECOLORMATRIX_TYPE_HUEROTATE, DontDelete|ReadOnly, 0, 0 },
    { "SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA", WebCore::SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFEColorMatrixElementPrototypeTable = 
{
    2, 6, JSSVGFEColorMatrixElementPrototypeTableEntries, 5
};

const ClassInfo JSSVGFEColorMatrixElementPrototype::info = { "SVGFEColorMatrixElementPrototype", 0, &JSSVGFEColorMatrixElementPrototypeTable, 0 };

JSObject* JSSVGFEColorMatrixElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGFEColorMatrixElementPrototype>(exec, "[[JSSVGFEColorMatrixElement.prototype]]");
}

bool JSSVGFEColorMatrixElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEColorMatrixElementPrototype, JSObject>(exec, &JSSVGFEColorMatrixElementPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGFEColorMatrixElementPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSSVGFEColorMatrixElement::info = { "SVGFEColorMatrixElement", &JSSVGElement::info, &JSSVGFEColorMatrixElementTable, 0 };

JSSVGFEColorMatrixElement::JSSVGFEColorMatrixElement(ExecState* exec, SVGFEColorMatrixElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGFEColorMatrixElementPrototype::self(exec));
}

bool JSSVGFEColorMatrixElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEColorMatrixElement, JSSVGElement>(exec, &JSSVGFEColorMatrixElementTable, this, propertyName, slot);
}

JSValue* JSSVGFEColorMatrixElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case In1AttrNum: {
        SVGFEColorMatrixElement* imp = static_cast<SVGFEColorMatrixElement*>(impl());

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
    case TypeAttrNum: {
        SVGFEColorMatrixElement* imp = static_cast<SVGFEColorMatrixElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedEnumeration> obj = imp->typeAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedEnumeration>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedEnumeration>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedEnumeration>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ValuesAttrNum: {
        SVGFEColorMatrixElement* imp = static_cast<SVGFEColorMatrixElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumberList> obj = imp->valuesAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumberList>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumberList>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumberList>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case XAttrNum: {
        SVGFEColorMatrixElement* imp = static_cast<SVGFEColorMatrixElement*>(impl());

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
        SVGFEColorMatrixElement* imp = static_cast<SVGFEColorMatrixElement*>(impl());

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
        SVGFEColorMatrixElement* imp = static_cast<SVGFEColorMatrixElement*>(impl());

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
        SVGFEColorMatrixElement* imp = static_cast<SVGFEColorMatrixElement*>(impl());

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
        SVGFEColorMatrixElement* imp = static_cast<SVGFEColorMatrixElement*>(impl());

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
        SVGFEColorMatrixElement* imp = static_cast<SVGFEColorMatrixElement*>(impl());

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
        SVGFEColorMatrixElement* imp = static_cast<SVGFEColorMatrixElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)
