#pragma once
#include <iostream>
#include "cstring"


typedef char16_t Char16;

namespace CeriumUI::Common {
    size_t strlen_auto(const char* c);
    size_t strlen_c16(const Char16* c);
}
