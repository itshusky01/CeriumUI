#include "Common.h"


namespace CeriumUI::Common {

    size_t strlen_auto(const char* c) {
        return strlen(c);
    }

    size_t strlen_c16(const Char16* c) {
        size_t len = 0;
        if (!c) { return -1; }
        auto* temp = (char16_t *)c;
        while (*temp) {
            len++;
        }

        return len;
    }

}
