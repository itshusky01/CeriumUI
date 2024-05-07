#include <iostream>
#include "core/WidgetBased.h"
#include "common/math/Vector2.h"

using namespace std;
using namespace CeriumUI;
using namespace CeriumUI::Common::Math;

int main() {

    Vector2<float> vec2_1(21.4f, 38.1f);
    Vector2<float> vec2_2(11.0f, 74.8f);

    cout << vec2_1.x << "\t" << vec2_1.y << "\n";
    cout << vec2_2.x << "\t" << vec2_2.y << "\n";

    cout << "\n";

    cout << vec2_1 + vec2_2 << "\n";
    cout << vec2_1 - vec2_2 << "\n";
    cout << vec2_1 * vec2_2 << "\n";
    cout << vec2_1 / vec2_2 << "\n";

    cout << "\n";

    cout << vec2_2 + vec2_1 << "\n";
    cout << vec2_2 - vec2_1 << "\n";
    cout << vec2_2 * vec2_1 << "\n";
    cout << vec2_2 / vec2_1 << "\n";

    return 0;
}
