#pragma once
#include "WidgetBased.h"

using namespace std;

namespace CeriumUI::Core {
    class WidgetText : private WidgetBased {
    public:
        void Init() override;
        void Destroy() override;

    private:
        string text;
        string uuid;
    };
}
