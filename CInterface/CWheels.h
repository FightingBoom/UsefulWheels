#ifndef __CWHEELS_H__
#define __CWHEELS_H__

#ifdef __cplusplus
extern "C"{
#endif

// HEX to BCD(8421)
unsigned char HexToBcd(unsigned char ucHex);

// BCD(8421) to HEX
unsigned char BcdToHex(unsigned char ucBcd);

#ifdef __cplusplus
}
#endif

#endif