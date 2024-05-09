#include <iostream>
#include "core/WidgetText.h"
#include "common/math/Vector2.h"

using namespace std;
using namespace CeriumUI;
using namespace CeriumUI::Core;
using namespace CeriumUI::Common::Math;

int main() {
    Core::WidgetText wText{};
    wText.Init();
    wText.Destroy();

    std::cout << "Hello World\n你好，世界。\n";

    return 0;
}
