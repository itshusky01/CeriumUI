#include <iostream>
#include "core/common/String.h"

using namespace std;
using namespace CeriumUI;
using namespace CeriumUI::Core::Common;

int main() {
    system("chcp 65001");

    String str;
    str = String((Char8*)"Hello World!");
    cout << str << "\n\tLength = " << str.Length() << "\n";

    str = (Char8*)"长亭外，古道边，芳草碧连天～";
    cout << str << "\n\tLength = " << str.Length() << "\n";

    Char8* c{};
    str = (Char8*)"为有牺牲多壮志，敢教日月换新天。";
    c = str.GetData();
    cout << c << "\n\tLength = " << str.Length() << "\n";

//    cout << "UTF-16 = " << str.ToChar16() << "\n";

    for (int i = 0; i < str.Length(); ++i) {
        cout << str[i];
    }
    cout << "\n";

    str = "\n\n"
          "答案在风中飘\n"
          "一个人必须抬头多少次\n"
          "才能看到天空？\n"
          "一个人必须有多少只耳朵\n"
          "才能听到人们的哭泣？\n"
          "要死多少人他才会知道\n"
          "死了太多人？\n"
          "答案，我的朋友，在风中飘扬\n"
          "答案在风中飘扬"
          "\n\n";
    for (int i = 0; i < str.Length(); ++i) {
        cout << str.GetIndexChar(i);
    }
    cout << "\n";

    String str_empty{};
    cout << str_empty << "\n\tLength = " << str_empty.Length() << "\n";

    return 0;
}
