#pragma once
#include "../common/math/Math.hpp"

using namespace CeriumUI::Common::Math;

namespace CeriumUI::Core {
    class WidgetBased {
    public:
        virtual void Init() = 0;
        virtual void Destroy() = 0;

    private:
        Vector2<int> position;
        Vector2<int> size;

    };
}