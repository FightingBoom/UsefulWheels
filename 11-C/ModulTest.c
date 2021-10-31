#include <stdio.h>
#include "CWheels.h"

extern unsigned char HexToBcd(unsigned char ucHex);
extern unsigned char BcdToHex(unsigned char ucBcd);

int main(void)
{
    unsigned char ucTemp = 0x32;
    unsigned char ucResult = 0;

    printf("ucTemp = 0x%02X\n", ucTemp);

    ucResult = HexToBcd(ucTemp);
    printf("ucResult = 0x%02X\n", ucResult);

    ucResult = BcdToHex(ucResult);
    printf("ucResult = 0x%02X\n", ucResult);

    return 0;
}