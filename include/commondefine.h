#ifndef _COMMONDEFINE_H_
#define _COMMONDEFINE_H_

#define STRING_CONTACT(x, y) #x#y   //拼接
#define STRING_TOSTR(x) #x          //转字符串

// UsefulWheels Common
#define UWC_MIN(a, b) (((a) <= (b)) ? (a) : (b))
#define UWC_MAX(a, b) (((a) >= (b)) ? (a) : (b))

// 速度单位
// 英里每小时（miles per hour，缩写为 mph）
// 公里每小时（kilometers per hour，缩写为 km/h 或 kph）
// 1 英里/小时 = 1.60934 公里/小时, 1 公里/小时 ≈ 0.62137 英里/小时
#define UWC_KPH_TO_MPH(a) ((a) / (1.60934))
#define UWC_MPH_TO_KPH(a) ((a) * (1.60934))

#endif