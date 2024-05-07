#pragma once
#include "Common.h"

namespace CeriumUI::Core::Common {

    class String {
    public:
        String();
        String(const Char8* c);
        String(Char8* c);
        String(Char8 c);

        size_t Length();

        Char8* GetData();

        Char16* ToChar16();

        // From index get Char in the String.
        Char8 GetIndexChar(int index);

        bool IsEmpty();

        size_t LengthMultiByte();

        /*
         * Comparison two Strings.
         * if comparison by characters count more than other one, return low than zero value.
         * if comparison by one less than other one, return more than zero value.
         * if equal both, return zero.
         */
        int Compare(String& s);

        String& operator=(const String& str);

        String& operator=(const Char8* c);

        friend std::ostream& operator<<(std::ostream& out, const String& str);

        String operator[](int index);

    private:
        Char8* data{};
        size_t data_len{};
        size_t data_len_multibyte{};

        void StrlenAuto(const Char8* c);

        size_t StrlenC8(const Char8* c);

        // For chinese and japanese etc.
        bool ScanMultiBytes(Char8* c);
    };

} // Core

