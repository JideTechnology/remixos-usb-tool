/* Automatically generated from ../bindings/js/kjs_window.cpp using JavaScriptCore/kjs/create_hash_table. DO NOT EDIT ! */

#include "lookup.h"

namespace KJS {

static const struct HashEntry WindowTableEntries[] = {
   { "moveBy", Window::MoveBy, DontDelete|Function, 2, 0 }/* 230789120 */ ,
   { 0, 0, 0, 0, 0 },
   { "onmousedown", Window::Onmousedown, DontDelete, 0, 0 }/* 3265682216 */ ,
   { 0, 0, 0, 0, 0 },
   { "addEventListener", Window::AddEventListener, DontDelete|Function, 3, 0 }/* 75269726 */ ,
   { 0, 0, 0, 0, 0 },
   { "setInterval", Window::SetInterval, DontDelete|Function, 2, &WindowTableEntries[123] }/* 2552993018 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "onabort", Window::Onabort, DontDelete, 0, 0 }/* 495556821 */ ,
   { "onerror", Window::Onerror, DontDelete, 0, 0 }/* 3777531886 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "onbeforeunload", Window::Onbeforeunload, DontDelete, 0, 0 }/* 245289091 */ ,
   { "onsubmit", Window::Onsubmit, DontDelete, 0, 0 }/* 10895898 */ ,
   { 0, 0, 0, 0, 0 },
   { "releaseEvents", Window::ReleaseEvents, DontDelete|Function, 0, &WindowTableEntries[122] }/* 2991574956 */ ,
   { 0, 0, 0, 0, 0 },
   { "scrollBy", Window::ScrollBy, DontDelete|Function, 2, 0 }/* 293467670 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "btoa", Window::BToA, DontDelete|Function, 1, &WindowTableEntries[127] }/* 3147832331 */ ,
   { 0, 0, 0, 0, 0 },
   { "showModalDialog", Window::ShowModalDialog, DontDelete|Function, 1, 0 }/* 1731685305 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "onunload", Window::Onunload, DontDelete, 0, 0 }/* 2768506114 */ ,
   { "captureEvents", Window::CaptureEvents, DontDelete|Function, 0, 0 }/* 1782609507 */ ,
   { "onload", Window::Onload, DontDelete, 0, 0 }/* 3960668140 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "ondblclick", Window::Ondblclick, DontDelete, 0, 0 }/* 2375071935 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "DOMException", Window::DOMException, DontDelete, 0, 0 }/* 2633742454 */ ,
   { 0, 0, 0, 0, 0 },
   { "location", Window::Location_, DontDelete, 0, 0 }/* 290291248 */ ,
   { "open", Window::Open, DontDelete|Function, 3, 0 }/* 1674648015 */ ,
   { "onmousemove", Window::Onmousemove, DontDelete, 0, &WindowTableEntries[125] }/* 1053316302 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "onsearch", Window::Onsearch, DontDelete, 0, 0 }/* 2178040503 */ ,
   { "moveTo", Window::MoveTo, DontDelete|Function, 2, 0 }/* 819074860 */ ,
   { 0, 0, 0, 0, 0 },
   { "onmouseover", Window::Onmouseover, DontDelete, 0, 0 }/* 793985466 */ ,
   { 0, 0, 0, 0, 0 },
   { "onmousewheel", Window::OnWindowMouseWheel, DontDelete, 0, 0 }/* 2004718922 */ ,
   { "clearInterval", Window::ClearInterval, DontDelete|Function, 1, 0 }/* 2225119677 */ ,
   { "setTimeout", Window::SetTimeout, DontDelete|Function, 2, &WindowTableEntries[120] }/* 3937824660 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "crypto", Window::Crypto, DontDelete|ReadOnly, 0, 0 }/* 2267914151 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "clearTimeout", Window::ClearTimeout, DontDelete|Function, 1, &WindowTableEntries[118] }/* 3761324042 */ ,
   { "onresize", Window::Onresize, DontDelete, 0, 0 }/* 4050308757 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "Option", Window::Option, DontDelete, 0, 0 }/* 27014980 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "resizeTo", Window::ResizeTo, DontDelete|Function, 2, &WindowTableEntries[119] }/* 1815747721 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "atob", Window::AToB, DontDelete|Function, 1, 0 }/* 2363648038 */ ,
   { 0, 0, 0, 0, 0 },
   { "event", Window::Event_, DontDelete, 0, 0 }/* 2755668584 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "scrollTo", Window::ScrollTo, DontDelete|Function, 2, &WindowTableEntries[121] }/* 1389155309 */ ,
   { "removeEventListener", Window::RemoveEventListener, DontDelete|Function, 3, 0 }/* 1047744376 */ ,
   { "onreset", Window::Onreset, DontDelete, 0, 0 }/* 2148355157 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "scroll", Window::Scroll, DontDelete|Function, 2, 0 }/* 3212074542 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "onscroll", Window::Onscroll, DontDelete, 0, 0 }/* 2108608051 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "resizeBy", Window::ResizeBy, DontDelete|Function, 2, &WindowTableEntries[124] }/* 2629669277 */ ,
   { 0, 0, 0, 0, 0 },
   { "onblur", Window::Onblur, DontDelete, 0, 0 }/* 714907351 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "onchange", Window::Onchange, DontDelete, 0, 0 }/* 3424140278 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "onfocus", Window::Onfocus, DontDelete, 0, &WindowTableEntries[126] }/* 1118781009 */ ,
   { "onclick", Window::Onclick, DontDelete, 0, 0 }/* 252326300 */ ,
   { "onkeydown", Window::Onkeydown, DontDelete, 0, 0 }/* 118358195 */ ,
   { "onkeypress", Window::Onkeypress, DontDelete, 0, 0 }/* 1537355616 */ ,
   { "onkeyup", Window::Onkeyup, DontDelete, 0, 0 }/* 1382830391 */ ,
   { "onmouseout", Window::Onmouseout, DontDelete, 0, 0 }/* 708315430 */ ,
   { "onmouseup", Window::Onmouseup, DontDelete, 0, 0 }/* 3297267162 */ ,
   { "onselect", Window::Onselect, DontDelete, 0, 0 }/* 2628083475 */ ,
   { "Image", Window::Image, DontDelete, 0, 0 }/* 3384281930 */ ,
   { "XMLHttpRequest", Window::XMLHttpRequest, DontDelete, 0, 0 }/* 760114463 */ ,
   { "XSLTProcessor", Window::XSLTProcessor_, DontDelete, 0, 0 }/* 3780338881 */ 
};

const struct HashTable WindowTable = { 2, 128, WindowTableEntries, 118 };

} // namespace

#include "lookup.h"

namespace KJS {

static const struct HashEntry LocationTableEntries[] = {
   { "host", Location::Host, DontDelete, 0, &LocationTableEntries[12] }/* 563166120 */ ,
   { "pathname", Location::Pathname, DontDelete, 0, &LocationTableEntries[13] }/* 2188260073 */ ,
   { 0, 0, 0, 0, 0 },
   { "port", Location::Port, DontDelete, 0, 0 }/* 559559355 */ ,
   { "href", Location::Href, DontDelete, 0, 0 }/* 3763893832 */ ,
   { "search", Location::Search, DontDelete, 0, 0 }/* 2758369481 */ ,
   { 0, 0, 0, 0, 0 },
   { "assign", Location::Assign, DontDelete|Function, 1, 0 }/* 3473799211 */ ,
   { "reload", Location::Reload, DontDelete|Function, 0, 0 }/* 1620839876 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "hash", Location::Hash, DontDelete, 0, &LocationTableEntries[15] }/* 3430241159 */ ,
   { "hostname", Location::Hostname, DontDelete, 0, &LocationTableEntries[14] }/* 1516393680 */ ,
   { "protocol", Location::Protocol, DontDelete, 0, 0 }/* 481372249 */ ,
   { "toString", Location::ToString, DontEnum|DontDelete|Function, 0, 0 }/* 150235932 */ ,
   { "replace", Location::Replace, DontDelete|Function, 1, 0 }/* 3553311767 */ 
};

const struct HashTable LocationTable = { 2, 16, LocationTableEntries, 12 };

} // namespace
