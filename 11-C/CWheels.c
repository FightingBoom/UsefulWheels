#include "CWheels.h"


/*
 * HEX to BCD(8421)
 * Range: 0 ~ 99
 * Example:
 *   1. 0x12 -> 12 -> 0x12
 *   2. 0x32 -> 50 -> 0x50
 *   3. 0x63 -> 99 -> 0x99
 */
unsigned char HexToBcd(unsigned char ucHex)
{
    return (((ucHex / 10) << 4) + (ucHex % 10));
}


/*
 * BCD(8421) to HEX
 * Range: 0 ~ 99
 * Example:
 *   1. 0x12 -> 12 -> 0x12
 *   2. 0x50 -> 50 -> 0x32
 *   3. 0x99 -> 99 -> 0x63
 */
unsigned char BcdToHex(unsigned char ucBcd)
{
    return ((ucBcd >> 4) * 10 + (ucBcd & 0x0F));
}