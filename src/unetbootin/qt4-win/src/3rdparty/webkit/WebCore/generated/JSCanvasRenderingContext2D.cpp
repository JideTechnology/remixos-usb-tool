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

#include "JSCanvasRenderingContext2D.h"

#include <wtf/GetPtr.h>

#include "CanvasGradient.h"
#include "CanvasPattern.h"
#include "CanvasRenderingContext2D.h"
#include "CanvasStyle.h"
#include "HTMLCanvasElement.h"
#include "JSCanvasGradient.h"
#include "JSHTMLCanvasElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSCanvasRenderingContext2DTableEntries[] =
{
    { "lineWidth", JSCanvasRenderingContext2D::LineWidthAttrNum, DontDelete, 0, &JSCanvasRenderingContext2DTableEntries[14] },
    { "shadowOffsetY", JSCanvasRenderingContext2D::ShadowOffsetYAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "strokeStyle", JSCanvasRenderingContext2D::StrokeStyleAttrNum, DontDelete, 0, 0 },
    { "globalAlpha", JSCanvasRenderingContext2D::GlobalAlphaAttrNum, DontDelete, 0, 0 },
    { "lineJoin", JSCanvasRenderingContext2D::LineJoinAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "shadowOffsetX", JSCanvasRenderingContext2D::ShadowOffsetXAttrNum, DontDelete, 0, 0 },
    { "globalCompositeOperation", JSCanvasRenderingContext2D::GlobalCompositeOperationAttrNum, DontDelete, 0, 0 },
    { "lineCap", JSCanvasRenderingContext2D::LineCapAttrNum, DontDelete, 0, 0 },
    { "shadowColor", JSCanvasRenderingContext2D::ShadowColorAttrNum, DontDelete, 0, 0 },
    { "canvas", JSCanvasRenderingContext2D::CanvasAttrNum, DontDelete|ReadOnly, 0, &JSCanvasRenderingContext2DTableEntries[13] },
    { "shadowBlur", JSCanvasRenderingContext2D::ShadowBlurAttrNum, DontDelete, 0, 0 },
    { "miterLimit", JSCanvasRenderingContext2D::MiterLimitAttrNum, DontDelete, 0, 0 },
    { "fillStyle", JSCanvasRenderingContext2D::FillStyleAttrNum, DontDelete, 0, 0 }
};

static const HashTable JSCanvasRenderingContext2DTable = 
{
    2, 15, JSCanvasRenderingContext2DTableEntries, 13
};

/* Hash table for prototype */

static const HashEntry JSCanvasRenderingContext2DPrototypeTableEntries[] =
{
    { "fill", JSCanvasRenderingContext2D::FillFuncNum, DontDelete|Function, 0, 0 },
    { "lineTo", JSCanvasRenderingContext2D::LineToFuncNum, DontDelete|Function, 2, &JSCanvasRenderingContext2DPrototypeTableEntries[41] },
    { 0, 0, 0, 0, 0 },
    { "save", JSCanvasRenderingContext2D::SaveFuncNum, DontDelete|Function, 0, &JSCanvasRenderingContext2DPrototypeTableEntries[36] },
    { 0, 0, 0, 0, 0 },
    { "restore", JSCanvasRenderingContext2D::RestoreFuncNum, DontDelete|Function, 0, &JSCanvasRenderingContext2DPrototypeTableEntries[46] },
    { "drawImageFromRect", JSCanvasRenderingContext2D::DrawImageFromRectFuncNum, DontDelete|Function, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "setLineJoin", JSCanvasRenderingContext2D::SetLineJoinFuncNum, DontDelete|Function, 1, 0 },
    { 0, 0, 0, 0, 0 },
    { "createLinearGradient", JSCanvasRenderingContext2D::CreateLinearGradientFuncNum, DontDelete|Function, 4, &JSCanvasRenderingContext2DPrototypeTableEntries[35] },
    { "setShadow", JSCanvasRenderingContext2D::SetShadowFuncNum, DontDelete|Function, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "clip", JSCanvasRenderingContext2D::ClipFuncNum, DontDelete|Function, 0, &JSCanvasRenderingContext2DPrototypeTableEntries[43] },
    { "rotate", JSCanvasRenderingContext2D::RotateFuncNum, DontDelete|Function, 1, &JSCanvasRenderingContext2DPrototypeTableEntries[38] },
    { "setLineWidth", JSCanvasRenderingContext2D::SetLineWidthFuncNum, DontDelete|Function, 1, 0 },
    { 0, 0, 0, 0, 0 },
    { "translate", JSCanvasRenderingContext2D::TranslateFuncNum, DontDelete|Function, 2, &JSCanvasRenderingContext2DPrototypeTableEntries[45] },
    { "setFillColor", JSCanvasRenderingContext2D::SetFillColorFuncNum, DontDelete|Function, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "createPattern", JSCanvasRenderingContext2D::CreatePatternFuncNum, DontDelete|Function, 0, 0 },
    { "quadraticCurveTo", JSCanvasRenderingContext2D::QuadraticCurveToFuncNum, DontDelete|Function, 4, 0 },
    { 0, 0, 0, 0, 0 },
    { "scale", JSCanvasRenderingContext2D::ScaleFuncNum, DontDelete|Function, 2, 0 },
    { "setCompositeOperation", JSCanvasRenderingContext2D::SetCompositeOperationFuncNum, DontDelete|Function, 1, &JSCanvasRenderingContext2DPrototypeTableEntries[44] },
    { 0, 0, 0, 0, 0 },
    { "beginPath", JSCanvasRenderingContext2D::BeginPathFuncNum, DontDelete|Function, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "bezierCurveTo", JSCanvasRenderingContext2D::BezierCurveToFuncNum, DontDelete|Function, 6, 0 },
    { 0, 0, 0, 0, 0 },
    { "moveTo", JSCanvasRenderingContext2D::MoveToFuncNum, DontDelete|Function, 2, &JSCanvasRenderingContext2DPrototypeTableEntries[42] },
    { "clearRect", JSCanvasRenderingContext2D::ClearRectFuncNum, DontDelete|Function, 4, &JSCanvasRenderingContext2DPrototypeTableEntries[40] },
    { 0, 0, 0, 0, 0 },
    { "arc", JSCanvasRenderingContext2D::ArcFuncNum, DontDelete|Function, 6, 0 },
    { "createRadialGradient", JSCanvasRenderingContext2D::CreateRadialGradientFuncNum, DontDelete|Function, 6, 0 },
    { "fillRect", JSCanvasRenderingContext2D::FillRectFuncNum, DontDelete|Function, 4, &JSCanvasRenderingContext2DPrototypeTableEntries[37] },
    { "closePath", JSCanvasRenderingContext2D::ClosePathFuncNum, DontDelete|Function, 0, 0 },
    { "arcTo", JSCanvasRenderingContext2D::ArcToFuncNum, DontDelete|Function, 5, &JSCanvasRenderingContext2DPrototypeTableEntries[39] },
    { "rect", JSCanvasRenderingContext2D::RectFuncNum, DontDelete|Function, 4, 0 },
    { "stroke", JSCanvasRenderingContext2D::StrokeFuncNum, DontDelete|Function, 0, 0 },
    { "setAlpha", JSCanvasRenderingContext2D::SetAlphaFuncNum, DontDelete|Function, 1, 0 },
    { "setLineCap", JSCanvasRenderingContext2D::SetLineCapFuncNum, DontDelete|Function, 1, 0 },
    { "setMiterLimit", JSCanvasRenderingContext2D::SetMiterLimitFuncNum, DontDelete|Function, 1, 0 },
    { "clearShadow", JSCanvasRenderingContext2D::ClearShadowFuncNum, DontDelete|Function, 0, 0 },
    { "setStrokeColor", JSCanvasRenderingContext2D::SetStrokeColorFuncNum, DontDelete|Function, 0, 0 },
    { "strokeRect", JSCanvasRenderingContext2D::StrokeRectFuncNum, DontDelete|Function, 0, 0 },
    { "drawImage", JSCanvasRenderingContext2D::DrawImageFuncNum, DontDelete|Function, 0, 0 }
};

static const HashTable JSCanvasRenderingContext2DPrototypeTable = 
{
    2, 47, JSCanvasRenderingContext2DPrototypeTableEntries, 35
};

const ClassInfo JSCanvasRenderingContext2DPrototype::info = { "CanvasRenderingContext2DPrototype", 0, &JSCanvasRenderingContext2DPrototypeTable, 0 };

JSObject* JSCanvasRenderingContext2DPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCanvasRenderingContext2DPrototype>(exec, "[[JSCanvasRenderingContext2D.prototype]]");
}

bool JSCanvasRenderingContext2DPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSCanvasRenderingContext2DPrototypeFunction, JSObject>(exec, &JSCanvasRenderingContext2DPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSCanvasRenderingContext2D::info = { "CanvasRenderingContext2D", 0, &JSCanvasRenderingContext2DTable, 0 };

JSCanvasRenderingContext2D::JSCanvasRenderingContext2D(ExecState* exec, CanvasRenderingContext2D* impl)
    : m_impl(impl)
{
    setPrototype(JSCanvasRenderingContext2DPrototype::self(exec));
}

JSCanvasRenderingContext2D::~JSCanvasRenderingContext2D()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSCanvasRenderingContext2D::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCanvasRenderingContext2D, KJS::DOMObject>(exec, &JSCanvasRenderingContext2DTable, this, propertyName, slot);
}

JSValue* JSCanvasRenderingContext2D::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CanvasAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return toJS(exec, WTF::getPtr(imp->canvas()));
    }
    case GlobalAlphaAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return jsNumber(imp->globalAlpha());
    }
    case GlobalCompositeOperationAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return jsString(imp->globalCompositeOperation());
    }
    case LineWidthAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return jsNumber(imp->lineWidth());
    }
    case LineCapAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return jsString(imp->lineCap());
    }
    case LineJoinAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return jsString(imp->lineJoin());
    }
    case MiterLimitAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return jsNumber(imp->miterLimit());
    }
    case ShadowOffsetXAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return jsNumber(imp->shadowOffsetX());
    }
    case ShadowOffsetYAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return jsNumber(imp->shadowOffsetY());
    }
    case ShadowBlurAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return jsNumber(imp->shadowBlur());
    }
    case ShadowColorAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        return jsString(imp->shadowColor());
    }
    case StrokeStyleAttrNum: {
        return strokeStyle(exec);
    }
    case FillStyleAttrNum: {
        return fillStyle(exec);
    }
    }
    return 0;
}

void JSCanvasRenderingContext2D::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSCanvasRenderingContext2D, KJS::DOMObject>(exec, propertyName, value, attr, &JSCanvasRenderingContext2DTable, this);
}

void JSCanvasRenderingContext2D::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case GlobalAlphaAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        imp->setGlobalAlpha(value->toFloat(exec));
        break;
    }
    case GlobalCompositeOperationAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        imp->setGlobalCompositeOperation(valueToStringWithNullCheck(exec, value));
        break;
    }
    case LineWidthAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        imp->setLineWidth(value->toFloat(exec));
        break;
    }
    case LineCapAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        imp->setLineCap(valueToStringWithNullCheck(exec, value));
        break;
    }
    case LineJoinAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        imp->setLineJoin(valueToStringWithNullCheck(exec, value));
        break;
    }
    case MiterLimitAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        imp->setMiterLimit(value->toFloat(exec));
        break;
    }
    case ShadowOffsetXAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        imp->setShadowOffsetX(value->toFloat(exec));
        break;
    }
    case ShadowOffsetYAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        imp->setShadowOffsetY(value->toFloat(exec));
        break;
    }
    case ShadowBlurAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        imp->setShadowBlur(value->toFloat(exec));
        break;
    }
    case ShadowColorAttrNum: {
        CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(impl());

        imp->setShadowColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    case StrokeStyleAttrNum: {
        setStrokeStyle(exec, value);
        break;
    }
    case FillStyleAttrNum: {
        setFillStyle(exec, value);
        break;
    }
    }
}

JSValue* JSCanvasRenderingContext2DPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSCanvasRenderingContext2D::info))
      return throwError(exec, TypeError);

    CanvasRenderingContext2D* imp = static_cast<CanvasRenderingContext2D*>(static_cast<JSCanvasRenderingContext2D*>(thisObj)->impl());

    switch (id) {
    case JSCanvasRenderingContext2D::SaveFuncNum: {

        imp->save();
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::RestoreFuncNum: {

        imp->restore();
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::ScaleFuncNum: {
        float sx = args[0]->toFloat(exec);
        float sy = args[1]->toFloat(exec);

        imp->scale(sx, sy);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::RotateFuncNum: {
        float angle = args[0]->toFloat(exec);

        imp->rotate(angle);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::TranslateFuncNum: {
        float tx = args[0]->toFloat(exec);
        float ty = args[1]->toFloat(exec);

        imp->translate(tx, ty);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::CreateLinearGradientFuncNum: {
        float x0 = args[0]->toFloat(exec);
        float y0 = args[1]->toFloat(exec);
        float x1 = args[2]->toFloat(exec);
        float y1 = args[3]->toFloat(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->createLinearGradient(x0, y0, x1, y1)));
        return result;
    }
    case JSCanvasRenderingContext2D::CreateRadialGradientFuncNum: {
        float x0 = args[0]->toFloat(exec);
        float y0 = args[1]->toFloat(exec);
        float r0 = args[2]->toFloat(exec);
        float x1 = args[3]->toFloat(exec);
        float y1 = args[4]->toFloat(exec);
        float r1 = args[5]->toFloat(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->createRadialGradient(x0, y0, r0, x1, y1, r1)));
        return result;
    }
    case JSCanvasRenderingContext2D::ClearRectFuncNum: {
        ExceptionCode ec = 0;
        float x = args[0]->toFloat(exec);
        float y = args[1]->toFloat(exec);
        float width = args[2]->toFloat(exec);
        float height = args[3]->toFloat(exec);

        imp->clearRect(x, y, width, height, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::FillRectFuncNum: {
        ExceptionCode ec = 0;
        float x = args[0]->toFloat(exec);
        float y = args[1]->toFloat(exec);
        float width = args[2]->toFloat(exec);
        float height = args[3]->toFloat(exec);

        imp->fillRect(x, y, width, height, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::BeginPathFuncNum: {

        imp->beginPath();
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::ClosePathFuncNum: {

        imp->closePath();
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::MoveToFuncNum: {
        float x = args[0]->toFloat(exec);
        float y = args[1]->toFloat(exec);

        imp->moveTo(x, y);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::LineToFuncNum: {
        float x = args[0]->toFloat(exec);
        float y = args[1]->toFloat(exec);

        imp->lineTo(x, y);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::QuadraticCurveToFuncNum: {
        float cpx = args[0]->toFloat(exec);
        float cpy = args[1]->toFloat(exec);
        float x = args[2]->toFloat(exec);
        float y = args[3]->toFloat(exec);

        imp->quadraticCurveTo(cpx, cpy, x, y);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::BezierCurveToFuncNum: {
        float cp1x = args[0]->toFloat(exec);
        float cp1y = args[1]->toFloat(exec);
        float cp2x = args[2]->toFloat(exec);
        float cp2y = args[3]->toFloat(exec);
        float x = args[4]->toFloat(exec);
        float y = args[5]->toFloat(exec);

        imp->bezierCurveTo(cp1x, cp1y, cp2x, cp2y, x, y);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::ArcToFuncNum: {
        ExceptionCode ec = 0;
        float x1 = args[0]->toFloat(exec);
        float y1 = args[1]->toFloat(exec);
        float x2 = args[2]->toFloat(exec);
        float y2 = args[3]->toFloat(exec);
        float radius = args[4]->toFloat(exec);

        imp->arcTo(x1, y1, x2, y2, radius, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::RectFuncNum: {
        ExceptionCode ec = 0;
        float x = args[0]->toFloat(exec);
        float y = args[1]->toFloat(exec);
        float width = args[2]->toFloat(exec);
        float height = args[3]->toFloat(exec);

        imp->rect(x, y, width, height, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::ArcFuncNum: {
        ExceptionCode ec = 0;
        float x = args[0]->toFloat(exec);
        float y = args[1]->toFloat(exec);
        float radius = args[2]->toFloat(exec);
        float startAngle = args[3]->toFloat(exec);
        float endAngle = args[4]->toFloat(exec);
        bool clockwise = args[5]->toBoolean(exec);

        imp->arc(x, y, radius, startAngle, endAngle, clockwise, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::FillFuncNum: {

        imp->fill();
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::StrokeFuncNum: {

        imp->stroke();
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::ClipFuncNum: {

        imp->clip();
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::SetAlphaFuncNum: {
        float alpha = args[0]->toFloat(exec);

        imp->setAlpha(alpha);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::SetCompositeOperationFuncNum: {
        String compositeOperation = args[0]->toString(exec);

        imp->setCompositeOperation(compositeOperation);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::SetLineWidthFuncNum: {
        float width = args[0]->toFloat(exec);

        imp->setLineWidth(width);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::SetLineCapFuncNum: {
        String cap = args[0]->toString(exec);

        imp->setLineCap(cap);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::SetLineJoinFuncNum: {
        String join = args[0]->toString(exec);

        imp->setLineJoin(join);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::SetMiterLimitFuncNum: {
        float limit = args[0]->toFloat(exec);

        imp->setMiterLimit(limit);
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::ClearShadowFuncNum: {

        imp->clearShadow();
        return jsUndefined();
    }
    case JSCanvasRenderingContext2D::SetStrokeColorFuncNum: {
        return static_cast<JSCanvasRenderingContext2D*>(thisObj)->setStrokeColor(exec, args);
    }
    case JSCanvasRenderingContext2D::SetFillColorFuncNum: {
        return static_cast<JSCanvasRenderingContext2D*>(thisObj)->setFillColor(exec, args);
    }
    case JSCanvasRenderingContext2D::StrokeRectFuncNum: {
        return static_cast<JSCanvasRenderingContext2D*>(thisObj)->strokeRect(exec, args);
    }
    case JSCanvasRenderingContext2D::DrawImageFuncNum: {
        return static_cast<JSCanvasRenderingContext2D*>(thisObj)->drawImage(exec, args);
    }
    case JSCanvasRenderingContext2D::DrawImageFromRectFuncNum: {
        return static_cast<JSCanvasRenderingContext2D*>(thisObj)->drawImageFromRect(exec, args);
    }
    case JSCanvasRenderingContext2D::SetShadowFuncNum: {
        return static_cast<JSCanvasRenderingContext2D*>(thisObj)->setShadow(exec, args);
    }
    case JSCanvasRenderingContext2D::CreatePatternFuncNum: {
        return static_cast<JSCanvasRenderingContext2D*>(thisObj)->createPattern(exec, args);
    }
    }
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, CanvasRenderingContext2D* obj)
{
    return KJS::cacheDOMObject<CanvasRenderingContext2D, JSCanvasRenderingContext2D>(exec, obj);
}
CanvasRenderingContext2D* toCanvasRenderingContext2D(KJS::JSValue* val)
{
    return val->isObject(&JSCanvasRenderingContext2D::info) ? static_cast<JSCanvasRenderingContext2D*>(val)->impl() : 0;
}

}
