#pragma once

#include <iostream>
#include "cstring"
#include <string>


typedef char16_t Char16;
typedef char Char8;

namespace CeriumUI::Core::Common {

    class Tool {
    public:
        static void DetectorMaxMin(int src1, int src2, int *min, int *max);

        static void UTF8ToUTF16(Char8 *pUTF8Start, Char8 *pUTF8End, Char16 *pUTF16Start, Char16 *pUTF16End) {
            Char16 *pTempUTF16 = pUTF16Start;
            Char8 *pTempUTF8 = pUTF8Start;
            while (pTempUTF8 < pUTF8End && pTempUTF16 < pUTF16End) {
                if (*pTempUTF8 >= 0xE0 && *pTempUTF8 <= 0xEF) {
                    // 处理三个字节的UTF-8字符
                    *pTempUTF16 = (*pTempUTF8++ & 0x1F) << 12;
                    *pTempUTF16 |= (*pTempUTF8++ & 0x3F) << 6;
                    *pTempUTF16 |= *pTempUTF8++ & 0x3F;
                } else if (*pTempUTF8 >= 0xC0 && *pTempUTF8 <= 0xDF) {
                    // 处理两个字节的UTF-8字符
                    *pTempUTF16 = (*pTempUTF8++ & 0x1F) << 6;
                    *pTempUTF16 |= *pTempUTF8++ & 0x3F;
                } else if (*pTempUTF8 < 0x80) {
                    // 处理单个字节的UTF-8字符
                    *pTempUTF16 = *pTempUTF8++;
                } else {
                    break;
                }
                pTempUTF16++;
            }
            *pTempUTF16 = 0;
        }
    };

}
