#pragma once
#include <iostream>
#include "cstring"
#include <string>


typedef char16_t Char16;
typedef char Char8;

namespace CeriumUI::Common {
    size_t StrlenAuto(const Char8* c);
    size_t StrlenC8(const Char8* c);
    size_t StrlenC16(const Char16* c);

    Char16* Char8ToChar16(Char8* c);
}
