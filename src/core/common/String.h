#pragma once
#include "Common.h"

namespace CeriumUI::Core {

    class String {
    public:
        String();
        String(const Char8* c);

        size_t Length();
        Char8* GetData();
        Char16* ToChar16();

        String& operator=(const String& str);
        String& operator=(const Char8* c);
        friend std::ostream& operator<<(std::ostream& out, const String& str);

    private:
        Char8* data{};
        size_t data_len{};
    };

} // Core

