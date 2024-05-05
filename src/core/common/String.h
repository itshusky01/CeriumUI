#pragma once
#include "Common.h"

namespace CeriumUI::Core {

    class String {
    public:
        String();
        String(const char* c);

        size_t Length();
        char* GetData();
        Char16* ToChar16();

        String& operator=(const String& str);
        String& operator=(const char* c);
        friend std::ostream& operator<<(std::ostream& out, const String& str);

    private:
        char* data{};
        size_t data_len{};
    };

} // Core

