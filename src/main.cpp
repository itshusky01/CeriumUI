#include <iostream>
#include "core/common/String.h"

using namespace std;
using namespace CeriumUI;

int main() {


    Core::String str;
    str = Core::String((char*)"Hello World!");
    cout << str << "\n\tLength = " << str.Length() << "\n";

    str = (char*)"长亭外，古道边，芳草碧连天～";
    cout << str << "\n\tLength = " << str.Length() << "\n";

    char* c{};
    str = (char*)"为有牺牲多壮志，敢教日月换新天。";
    c = str.GetData();
    cout << c << "\n";

    cout << "UTF-16 = " << str.ToChar16() << "\n";

    return 0;
}
