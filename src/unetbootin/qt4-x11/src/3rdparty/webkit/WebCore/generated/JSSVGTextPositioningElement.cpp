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
#include "JSSVGTextPositioningElement.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedLengthList.h"
#include "JSSVGAnimatedNumberList.h"
#include "SVGTextPositioningElement.h"


using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTextPositioningElement)

/* Hash table */

static const HashTableValue JSSVGTextPositioningElementTableValues[6] =
{
    { "x", DontDelete|ReadOnly, (intptr_t)jsSVGTextPositioningElementX, (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)jsSVGTextPositioningElementY, (intptr_t)0 },
    { "dx", DontDelete|ReadOnly, (intptr_t)jsSVGTextPositioningElementDx, (intptr_t)0 },
    { "dy", DontDelete|ReadOnly, (intptr_t)jsSVGTextPositioningElementDy, (intptr_t)0 },
    { "rotate", DontDelete|ReadOnly, (intptr_t)jsSVGTextPositioningElementRotate, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGTextPositioningElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSSVGTextPositioningElementTableValues, 0 };
#else
    { 16, 15, JSSVGTextPositioningElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGTextPositioningElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGTextPositioningElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGTextPositioningElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGTextPositioningElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGTextPositioningElementPrototype::s_info = { "SVGTextPositioningElementPrototype", 0, &JSSVGTextPositioningElementPrototypeTable, 0 };

JSObject* JSSVGTextPositioningElementPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSSVGTextPositioningElement>(exec);
}

const ClassInfo JSSVGTextPositioningElement::s_info = { "SVGTextPositioningElement", &JSSVGTextContentElement::s_info, &JSSVGTextPositioningElementTable, 0 };

JSSVGTextPositioningElement::JSSVGTextPositioningElement(PassRefPtr<Structure> structure, PassRefPtr<SVGTextPositioningElement> impl)
    : JSSVGTextContentElement(structure, impl)
{
}

JSObject* JSSVGTextPositioningElement::createPrototype(ExecState* exec)
{
    return new (exec) JSSVGTextPositioningElementPrototype(JSSVGTextPositioningElementPrototype::createStructure(JSSVGTextContentElementPrototype::self(exec)));
}

bool JSSVGTextPositioningElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTextPositioningElement, Base>(exec, &JSSVGTextPositioningElementTable, this, propertyName, slot);
}

JSValuePtr jsSVGTextPositioningElementX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(static_cast<JSSVGTextPositioningElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLengthList> obj = imp->xAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGTextPositioningElementY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(static_cast<JSSVGTextPositioningElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLengthList> obj = imp->yAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGTextPositioningElementDx(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(static_cast<JSSVGTextPositioningElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLengthList> obj = imp->dxAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGTextPositioningElementDy(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(static_cast<JSSVGTextPositioningElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLengthList> obj = imp->dyAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGTextPositioningElementRotate(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(static_cast<JSSVGTextPositioningElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedNumberList> obj = imp->rotateAnimated();
    return toJS(exec, obj.get(), imp);
}


}

#endif // ENABLE(SVG)
