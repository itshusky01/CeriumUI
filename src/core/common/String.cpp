#include "String.h"


namespace CeriumUI::Core {

    String::String() = default;

    String::String(const Char8 *c) {
        this->data = (Char8*)c;
        data_len = Common::StrlenAuto(c);
    }

    String::String(Char8 *c) {
        this->data = c;
        data_len = Common::StrlenAuto(c);
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
        return Common::Char8ToChar16(this->data);
    }

    Char8 String::GetIndexChar(int index) {
        String c = data[index];
        Char8 temp = c.data[0];
        return c.GetData()[0];
    }

    String &String::operator=(const String &str) {
        if (this == &str){
            return *this;
        }

        if (data) {
            delete[] data;
            data_len = 0;
        }
        data = str.data;
        data_len = Common::StrlenAuto(str.data);

        return *this;
    }

    String &String::operator=(const Char8 *c) {
        data_len = Common::StrlenAuto(c);
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
        String str(arr);

        return str;
    }

} // Core