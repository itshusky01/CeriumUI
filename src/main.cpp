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

    return 0;
}
