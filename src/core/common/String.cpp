#include "String.h"


namespace CeriumUI::Core {

    String::String() = default;

    String::String(const char *c) {
        this->data = (char*)c;
        data_len = Common::strlen_auto(c);
    }

    size_t String::Length() {
        return data_len;
    }

    char* String::GetData() {
        return data;
    }

    // Todo
    Char16* String::ToChar16() {
        return 0;
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
        data_len = Common::strlen_auto(str.data);

        return *this;
    }

    String &String::operator=(const char *c) {
        data_len = Common::strlen_auto(c);
        data = (char*)c;

        return *this;
    }

    std::ostream &operator<<(std::ostream &out, const String &str) {
        out << str.data;
        return out;
    }

} // Core