#include <locale>
#include <codecvt>
#include "Common.h"


namespace CeriumUI::Core::Common {

    void Tool::DetectorMaxMin(int src1, int src2, int* min, int* max) {
        if (src1 > src2) {
            *max = src1;
            *min = src2;
        } else if (src1 < src2) {
            *max = src2;
            *min = src1;
        } else {
            *max = src1;
            *min = *max;
        }
    }

}
