#include <locale>
#include <codecvt>
#include "Common.h"


namespace CeriumUI::Common {

    size_t StrlenAuto(const Char8* c) {
        return StrlenC8(c);
    }

    size_t StrlenC8(const Char8* c) {
        return strlen(c);
    }

    size_t StrlenC16(const Char16* c) {
        size_t len = 0;
        if (!c) { return -1; }
        auto* temp = (char16_t *)c;
        while (*temp) {
            len++;
        }

        return len;
    }

    Char16* Char8ToChar16(Char8 *c) {
        std::string src;
        std::wstring_convert<std::codecvt_utf8_utf16<Char16>, Char16> convert;
        std::u16string dest = convert.from_bytes(src);

        return (Char16*)dest.c_str();
    }

}
