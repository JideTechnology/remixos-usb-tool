/* Automatically generated from ../../JavaScriptCore/kjs/date_object.cpp using JavaScriptCore/kjs/create_hash_table. DO NOT EDIT ! */

#include "lookup.h"

namespace KJS {

static const struct HashEntry dateTableEntries[] = {
   { 0, 0, 0, 0, 0 },
   { "getUTCDate", -DateProtoFunc::GetDate, DontEnum|Function, 0, 0 }/* 1743492546 */ ,
   { 0, 0, 0, 0, 0 },
   { "setUTCDate", -DateProtoFunc::SetDate, DontEnum|Function, 1, 0 }/* 2173578782 */ ,
   { "valueOf", DateProtoFunc::ValueOf, DontEnum|Function, 0, 0 }/* 510084322 */ ,
   { "toUTCString", -DateProtoFunc::ToUTCString, DontEnum|Function, 0, 0 }/* 3697199696 */ ,
   { "getUTCSeconds", -DateProtoFunc::GetSeconds, DontEnum|Function, 0, &dateTableEntries[70] }/* 331727278 */ ,
   { 0, 0, 0, 0, 0 },
   { "toString", DateProtoFunc::ToString, DontEnum|Function, 0, &dateTableEntries[68] }/* 150235932 */ ,
   { "toLocaleString", DateProtoFunc::ToLocaleString, DontEnum|Function, 0, &dateTableEntries[64] }/* 3561459206 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "getUTCMonth", -DateProtoFunc::GetMonth, DontEnum|Function, 0, 0 }/* 2211830061 */ ,
   { "toTimeString", DateProtoFunc::ToTimeString, DontEnum|Function, 0, 0 }/* 4132146967 */ ,
   { "setUTCHours", -DateProtoFunc::SetHours, DontEnum|Function, 4, 0 }/* 1411482796 */ ,
   { "setTime", DateProtoFunc::SetTime, DontEnum|Function, 1, 0 }/* 1254483803 */ ,
   { "getTimezoneOffset", DateProtoFunc::GetTimezoneOffset, DontEnum|Function, 0, 0 }/* 1658077860 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "setFullYear", DateProtoFunc::SetFullYear, DontEnum|Function, 3, 0 }/* 717467501 */ ,
   { "setUTCMonth", -DateProtoFunc::SetMonth, DontEnum|Function, 2, 0 }/* 4155568107 */ ,
   { 0, 0, 0, 0, 0 },
   { "getUTCMilliseconds", -DateProtoFunc::GetMilliSeconds, DontEnum|Function, 0, 0 }/* 3170478621 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "getUTCMinutes", -DateProtoFunc::GetMinutes, DontEnum|Function, 0, 0 }/* 1857757408 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "toLocaleTimeString", DateProtoFunc::ToLocaleTimeString, DontEnum|Function, 0, 0 }/* 4125190547 */ ,
   { "setUTCMilliseconds", -DateProtoFunc::SetMilliSeconds, DontEnum|Function, 1, 0 }/* 1486546183 */ ,
   { "getUTCHours", -DateProtoFunc::GetHours, DontEnum|Function, 0, &dateTableEntries[71] }/* 1250648265 */ ,
   { 0, 0, 0, 0, 0 },
   { "setHours", DateProtoFunc::SetHours, DontEnum|Function, 4, &dateTableEntries[72] }/* 536837857 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "getMinutes", DateProtoFunc::GetMinutes, DontEnum|Function, 0, 0 }/* 3158996000 */ ,
   { 0, 0, 0, 0, 0 },
   { "getTime", DateProtoFunc::GetTime, DontEnum|Function, 0, &dateTableEntries[62] }/* 879320533 */ ,
   { "toGMTString", -DateProtoFunc::ToGMTString, DontEnum|Function, 0, 0 }/* 3242868563 */ ,
   { 0, 0, 0, 0, 0 },
   { "getYear", DateProtoFunc::GetYear, DontEnum|Function, 0, 0 }/* 2890365608 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "getFullYear", DateProtoFunc::GetFullYear, DontEnum|Function, 0, 0 }/* 564240045 */ ,
   { 0, 0, 0, 0, 0 },
   { "toDateString", DateProtoFunc::ToDateString, DontEnum|Function, 0, 0 }/* 3879312314 */ ,
   { "getSeconds", DateProtoFunc::GetSeconds, DontEnum|Function, 0, 0 }/* 2617961208 */ ,
   { "getUTCFullYear", -DateProtoFunc::GetFullYear, DontEnum|Function, 0, &dateTableEntries[63] }/* 3337453342 */ ,
   { "toLocaleDateString", DateProtoFunc::ToLocaleDateString, DontEnum|Function, 0, &dateTableEntries[61] }/* 4088025037 */ ,
   { 0, 0, 0, 0, 0 },
   { "getMilliseconds", DateProtoFunc::GetMilliSeconds, DontEnum|Function, 0, 0 }/* 2585757238 */ ,
   { 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0 },
   { "getHours", DateProtoFunc::GetHours, DontEnum|Function, 0, &dateTableEntries[65] }/* 3492558780 */ ,
   { "getDay", DateProtoFunc::GetDay, DontEnum|Function, 0, &dateTableEntries[67] }/* 983554117 */ ,
   { "getMonth", DateProtoFunc::GetMonth, DontEnum|Function, 0, &dateTableEntries[66] }/* 1883011250 */ ,
   { "getDate", DateProtoFunc::GetDate, DontEnum|Function, 0, 0 }/* 2813471201 */ ,
   { "getUTCDay", -DateProtoFunc::GetDay, DontEnum|Function, 0, 0 }/* 1512450096 */ ,
   { "setMilliseconds", DateProtoFunc::SetMilliSeconds, DontEnum|Function, 1, 0 }/* 3072679504 */ ,
   { "setSeconds", DateProtoFunc::SetSeconds, DontEnum|Function, 2, &dateTableEntries[69] }/* 3818259740 */ ,
   { "setUTCSeconds", -DateProtoFunc::SetSeconds, DontEnum|Function, 2, 0 }/* 3931752736 */ ,
   { "setMinutes", DateProtoFunc::SetMinutes, DontEnum|Function, 3, 0 }/* 3436610130 */ ,
   { "setUTCMinutes", -DateProtoFunc::SetMinutes, DontEnum|Function, 3, 0 }/* 613791402 */ ,
   { "setDate", DateProtoFunc::SetDate, DontEnum|Function, 1, 0 }/* 1843594458 */ ,
   { "setMonth", DateProtoFunc::SetMonth, DontEnum|Function, 2, 0 }/* 3582806214 */ ,
   { "setUTCFullYear", -DateProtoFunc::SetFullYear, DontEnum|Function, 3, 0 }/* 3106633472 */ ,
   { "setYear", DateProtoFunc::SetYear, DontEnum|Function, 1, 0 }/* 3894451158 */ 
};

const struct HashTable dateTable = { 2, 73, dateTableEntries, 61 };

} // namespace
