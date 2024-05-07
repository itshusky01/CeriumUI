#pragma once

#include <iostream>

namespace CeriumUI::Core {
    class WidgetBased {
    public:
        virtual void Init() = 0;
        virtual void Destroy() = 0;

    private:

    };
}