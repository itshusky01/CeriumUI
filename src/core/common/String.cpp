#include "String.h"


namespace CeriumUI::Core::Common {

    String::String() {
        this->data = "";
        data_len = 0;
    }

    String::String(const Char8 *c) {
        this->data = (Char8 *) c;
        StrlenAuto(this->data);
    }

    String::String(Char8 *c) {
        this->data = c;
        StrlenAuto(this->data);
    }

    String::String(Char8 c) {
        this->data = &c;
        data_len = 1;
    }

    void String::StrlenAuto(const Char8 *c) {
        // Calculate single byte string length.
        data_len = StrlenC8(c);

        // Calculate include multibyte and single byte string length.
        data_len_multibyte = 0;
        for (int i = 0; i < StrlenC8(c); ++i) {
            const Char8 temp[3] = {c[i]};
            if (ScanMultiBytes((Char8 *) temp)) {
                data_len_multibyte += 1;
                i += 2;
            } else {
                data_len_multibyte += 1;
            }
        }
    }

    size_t String::StrlenC8(const Char8 *c) {
        return strlen(c);
    }

    bool String::ScanMultiBytes(Char8 *c) {
        for (int i = 0; i < strlen(c); ++i) {
            if (((*(c + i)) & 0x80) != 0) {
                return true;
            }
        }

        return false;
    }

    size_t String::Length() {
        StrlenAuto((Char8 *) data);
        return data_len;
    }

    size_t String::LengthMultiByte() {
        return this->data_len_multibyte;
    }

    Char8 *String::GetData() {
        return data;
    }

    // Todo
    Char16 *String::ToChar16() {
        return 0;
    }

    Char8 String::GetIndexChar(int index) {
        if (IsEmpty()) {
            return {};
        }

        return ((String) data[index]).GetData()[0];
    }

    bool String::IsEmpty() {
        if (data == nullptr || data == "") {
            return true;
        }

        return false;
    }

    int String::Compare(String &s) {
        int counter = 0;

        return counter;
    }

    String &String::operator=(const String &str) {
        if (this == &str) {
            return *this;
        }

        data = str.data;
        StrlenAuto(str.data);

        return *this;
    }

    String &String::operator=(const Char8 *c) {
        StrlenAuto(c);
        data = (Char8 *) c;

        return *this;
    }

    std::ostream &operator<<(std::ostream &out, const String &str) {
        if (str.data == nullptr || str.data == "") {
            return out;
        }
        out << str.data;
        return out;
    }

    String String::operator[](int index) {
        if (index >= data_len || index < 0) {
            return String();
        }

        Char8 arr[2] = {data[index], '\0'};

        return String(arr);;
    }

} // Core