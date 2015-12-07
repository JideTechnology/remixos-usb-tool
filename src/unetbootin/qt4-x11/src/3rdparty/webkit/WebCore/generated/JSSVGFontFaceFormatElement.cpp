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


#if ENABLE(SVG) && ENABLE(SVG_FONTS)

#include "SVGElement.h"
#include "JSSVGFontFaceFormatElement.h"

#include <wtf/GetPtr.h>

#include "SVGFontFaceFormatElement.h"


using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFontFaceFormatElement)

/* Hash table for prototype */

static const HashTableValue JSSVGFontFaceFormatElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFontFaceFormatElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFontFaceFormatElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGFontFaceFormatElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFontFaceFormatElementPrototype::s_info = { "SVGFontFaceFormatElementPrototype", 0, &JSSVGFontFaceFormatElementPrototypeTable, 0 };

JSObject* JSSVGFontFaceFormatElementPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSSVGFontFaceFormatElement>(exec);
}

const ClassInfo JSSVGFontFaceFormatElement::s_info = { "SVGFontFaceFormatElement", &JSSVGElement::s_info, 0, 0 };

JSSVGFontFaceFormatElement::JSSVGFontFaceFormatElement(PassRefPtr<Structure> structure, PassRefPtr<SVGFontFaceFormatElement> impl)
    : JSSVGElement(structure, impl)
{
}

JSObject* JSSVGFontFaceFormatElement::createPrototype(ExecState* exec)
{
    return new (exec) JSSVGFontFaceFormatElementPrototype(JSSVGFontFaceFormatElementPrototype::createStructure(JSSVGElementPrototype::self(exec)));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)
