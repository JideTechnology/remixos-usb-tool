/*
 * This file is part of the WebKit project.
 *
 * Copyright (C) 2006 Oliver Hunt <ojh16@student.canterbury.ac.nz>
 *           (C) 2006 Apple Computer Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#include "config.h"

#if ENABLE(SVG)
#include "RenderSVGTSpan.h"
#include "GraphicsContext.h"
#include "KCanvasRenderingStyle.h"
#include "SVGRootInlineBox.h"
#include "SVGInlineFlowBox.h"
#include "AffineTransform.h"
#include "SVGTextPositioningElement.h"
#include "SVGLengthList.h"

namespace WebCore {

RenderSVGTSpan::RenderSVGTSpan(Node* n) : RenderSVGInline(n)
{
}

void RenderSVGTSpan::absoluteRects(Vector<IntRect>& rects, int tx, int ty, bool)
{
    InlineFlowBox* initFlow = firstLineBox();
    FloatRect bounds(tx + initFlow->xPos(), ty + initFlow->yPos(), width(), height());
    rects.append(enclosingIntRect(absoluteTransform().mapRect(bounds)));
}


}

#endif // ENABLE(SVG)
