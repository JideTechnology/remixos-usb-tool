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

#include "SVGElement.h"
#include "JSSVGUseElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGElementInstance.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGElementInstance.h"
#include "SVGStringList.h"
#include "SVGUseElement.h"

#include <runtime/Error.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGUseElement)

/* Hash table */

static const HashTableValue JSSVGUseElementTableValues[19] =
{
    { "x", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementX, (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementY, (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementWidth, (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementHeight, (intptr_t)0 },
    { "instanceRoot", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementInstanceRoot, (intptr_t)0 },
    { "animatedInstanceRoot", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementAnimatedInstanceRoot, (intptr_t)0 },
    { "href", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementHref, (intptr_t)0 },
    { "requiredFeatures", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementRequiredFeatures, (intptr_t)0 },
    { "requiredExtensions", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementRequiredExtensions, (intptr_t)0 },
    { "systemLanguage", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementSystemLanguage, (intptr_t)0 },
    { "xmllang", DontDelete, (intptr_t)jsSVGUseElementXmllang, (intptr_t)setJSSVGUseElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)jsSVGUseElementXmlspace, (intptr_t)setJSSVGUseElementXmlspace },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementExternalResourcesRequired, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementStyle, (intptr_t)0 },
    { "transform", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementTransform, (intptr_t)0 },
    { "nearestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementNearestViewportElement, (intptr_t)0 },
    { "farthestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGUseElementFarthestViewportElement, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGUseElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSSVGUseElementTableValues, 0 };
#else
    { 68, 63, JSSVGUseElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGUseElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete|Function, (intptr_t)jsSVGUseElementPrototypeFunctionHasExtension, (intptr_t)1 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGUseElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { "getBBox", DontDelete|Function, (intptr_t)jsSVGUseElementPrototypeFunctionGetBBox, (intptr_t)0 },
    { "getCTM", DontDelete|Function, (intptr_t)jsSVGUseElementPrototypeFunctionGetCTM, (intptr_t)0 },
    { "getScreenCTM", DontDelete|Function, (intptr_t)jsSVGUseElementPrototypeFunctionGetScreenCTM, (intptr_t)0 },
    { "getTransformToElement", DontDelete|Function, (intptr_t)jsSVGUseElementPrototypeFunctionGetTransformToElement, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGUseElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 2047, JSSVGUseElementPrototypeTableValues, 0 };
#else
    { 17, 15, JSSVGUseElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGUseElementPrototype::s_info = { "SVGUseElementPrototype", 0, &JSSVGUseElementPrototypeTable, 0 };

JSObject* JSSVGUseElementPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSSVGUseElement>(exec);
}

bool JSSVGUseElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGUseElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGUseElement::s_info = { "SVGUseElement", &JSSVGElement::s_info, &JSSVGUseElementTable, 0 };

JSSVGUseElement::JSSVGUseElement(PassRefPtr<Structure> structure, PassRefPtr<SVGUseElement> impl)
    : JSSVGElement(structure, impl)
{
}

JSObject* JSSVGUseElement::createPrototype(ExecState* exec)
{
    return new (exec) JSSVGUseElementPrototype(JSSVGUseElementPrototype::createStructure(JSSVGElementPrototype::self(exec)));
}

bool JSSVGUseElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGUseElement, Base>(exec, &JSSVGUseElementTable, this, propertyName, slot);
}

JSValuePtr jsSVGUseElementX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGUseElementY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGUseElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGUseElementHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGUseElementInstanceRoot(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->instanceRoot()));
}

JSValuePtr jsSVGUseElementAnimatedInstanceRoot(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->animatedInstanceRoot()));
}

JSValuePtr jsSVGUseElementHref(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGUseElementRequiredFeatures(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
}

JSValuePtr jsSVGUseElementRequiredExtensions(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
}

JSValuePtr jsSVGUseElementSystemLanguage(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
}

JSValuePtr jsSVGUseElementXmllang(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->xmllang());
}

JSValuePtr jsSVGUseElementXmlspace(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->xmlspace());
}

JSValuePtr jsSVGUseElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGUseElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGUseElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->style()));
}

JSValuePtr jsSVGUseElementTransform(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGUseElementNearestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
}

JSValuePtr jsSVGUseElementFarthestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
}

void JSSVGUseElement::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSSVGUseElement, Base>(exec, propertyName, value, &JSSVGUseElementTable, this, slot);
}

void setJSSVGUseElementXmllang(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(thisObject)->impl());
    imp->setXmllang(value->toString(exec));
}

void setJSSVGUseElementXmlspace(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGUseElement* imp = static_cast<SVGUseElement*>(static_cast<JSSVGUseElement*>(thisObject)->impl());
    imp->setXmlspace(value->toString(exec));
}

JSValuePtr jsSVGUseElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGUseElement::s_info))
        return throwError(exec, TypeError);
    JSSVGUseElement* castedThisObj = static_cast<JSSVGUseElement*>(asObject(thisValue));
    SVGUseElement* imp = static_cast<SVGUseElement*>(castedThisObj->impl());
    const UString& extension = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValuePtr jsSVGUseElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGUseElement::s_info))
        return throwError(exec, TypeError);
    JSSVGUseElement* castedThisObj = static_cast<JSSVGUseElement*>(asObject(thisValue));
    SVGUseElement* imp = static_cast<SVGUseElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValuePtr jsSVGUseElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGUseElement::s_info))
        return throwError(exec, TypeError);
    JSSVGUseElement* castedThisObj = static_cast<JSSVGUseElement*>(asObject(thisValue));
    SVGUseElement* imp = static_cast<SVGUseElement*>(castedThisObj->impl());


    JSC::JSValuePtr result = toJS(exec, JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), imp);
    return result;
}

JSValuePtr jsSVGUseElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGUseElement::s_info))
        return throwError(exec, TypeError);
    JSSVGUseElement* castedThisObj = static_cast<JSSVGUseElement*>(asObject(thisValue));
    SVGUseElement* imp = static_cast<SVGUseElement*>(castedThisObj->impl());


    JSC::JSValuePtr result = toJS(exec, JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getCTM()).get(), imp);
    return result;
}

JSValuePtr jsSVGUseElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGUseElement::s_info))
        return throwError(exec, TypeError);
    JSSVGUseElement* castedThisObj = static_cast<JSSVGUseElement*>(asObject(thisValue));
    SVGUseElement* imp = static_cast<SVGUseElement*>(castedThisObj->impl());


    JSC::JSValuePtr result = toJS(exec, JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getScreenCTM()).get(), imp);
    return result;
}

JSValuePtr jsSVGUseElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGUseElement::s_info))
        return throwError(exec, TypeError);
    JSSVGUseElement* castedThisObj = static_cast<JSSVGUseElement*>(asObject(thisValue));
    SVGUseElement* imp = static_cast<SVGUseElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(exec, 0));


    JSC::JSValuePtr result = toJS(exec, JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getTransformToElement(element, ec)).get(), imp);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG)
