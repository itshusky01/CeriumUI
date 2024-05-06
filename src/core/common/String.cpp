#include "String.h"


namespace CeriumUI::Core::Common {

    String::String() = default;

    String::String(const Char8 *c) {
        this->data = (Char8*)c;
        data_len = Tool::StrlenAuto(c);
    }

    String::String(Char8 *c) {
        this->data = c;
        data_len = Tool::StrlenAuto(c);
    }

    String::String(Char8 c) {
        this->data = &c;
        data_len = 1;
    }

    size_t String::Length() {
        return data_len;
    }

    Char8* String::GetData() {
        return data;
    }

    // Todo
    Char16* String::ToChar16() {
        return Tool::Char8ToChar16(this->data);
    }

    Char8 String::GetIndexChar(int index) {
        if (IsEmpty()) {
            return {};
        }

        return ((String)data[index]).GetData()[0];
    }

    bool String::IsEmpty() {
        if (data == nullptr || data == "") {
            return true;
        }

        return false;
    }

    String &String::operator=(const String &str) {
        if (this == &str){
            return *this;
        }

        if (IsEmpty()) {
            delete[] data;
            data_len = 0;
        }
        data = str.data;
        data_len = Tool::StrlenAuto(str.data);

        return *this;
    }

    String &String::operator=(const Char8 *c) {
        data_len = Tool::StrlenAuto(c);
        data = (Char8*)c;

        return *this;
    }

    std::ostream &operator<<(std::ostream &out, const String &str) {
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