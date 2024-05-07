#include <iostream>
#include "core/common/String.h"

//using namespace std;
using namespace CeriumUI;
using namespace CeriumUI::Core::Common;

int main() {
    system("chcp 65001");

//    auto temp = strlen("的");
//
//    String str;
////    str = String((Char8*)"Hello World!");
////    std::cout << str << "\n\tLength = " << str.Length() << "\n";
//
//    str = (Char8*)"长亭外，古道边，芳草碧连天～HA";
//    std::cout << str << "\n\tLength = " << str.Length() << "\n";
//
//    Char8* c{};
//    str = (Char8*)"为有牺牲多壮志，敢教日月换新天。";
//    c = str.GetData();
//    std::cout << c << "\n\tLength = " << str.Length() << "\n";
//
////    cout << "UTF-16 = " << str.ToChar16() << "\n";
//
//    for (int i = 0; i < str.Length(); ++i) {
//        std::cout << str[i];
//    }
//    std::cout << "\n";
//
//    str = "\n\n"
//          "答案在风中飘\n"
//          "一个人必须抬头多少次\n"
//          "才能看到天空？\n"
//          "一个人必须有多少只耳朵\n"
//          "才能听到人们的哭泣？\n"
//          "要死多少人他才会知道\n"
//          "死了太多人？\n"
//          "答案，我的朋友，在风中飘扬\n"
//          "答案在风中飘扬"
//          "\n\n";
//    for (int i = 0; i < str.Length(); ++i) {
//        std::cout << str.GetIndexChar(i);
//    }
//    std::cout << "\n";
//
//    String str_empty{};
////    std::cout << str_empty << "\n\tLength = " << str_empty.Length() << "\n";

    Char8* temp = "A";
    size_t tempSize = strlen(temp);

    String str01 = "原神，启动！";
    String str02 = "原神，启动！A";
    String str03 = "你114514A草BSN";
    String str04 = "原神，不动！";
    String str05 = "的";
//    std::cout << "str02 = " << str01.Compare(str02) << "\n";
//    std::cout << "str03 = " << str01.Compare(str03) << "\n";
//    std::cout << "str04 = " << str01.Compare(str04) << "\n";

    std::cout << "Length: " << str02.Length() << "\tMultiByteLength: " << str02.LengthMultiByte() << "\n";
    std::cout << "Length: " << str03.Length() << "\tMultiByteLength: " << str03.LengthMultiByte() << "\n";
    std::cout << "Length: " << str04.Length() << "\tMultiByteLength: " << str04.LengthMultiByte() << "\n";
    std::cout << "Length: " << str05.Length() << "\tMultiByteLength: " << str05.LengthMultiByte() << "\n";

//    Char8* c8 = "你";
//    Char16* c16 = (Char16*)"s";
//    size_t size = strlen(c8);
//    memset(c16, 0, size * 3);
//    Tool::UTF8ToUTF16(c8, c8 + strlen(c8), c16, c16 + 128);

    return 0;
}
