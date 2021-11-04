#ifndef __LINUXCPP_TYPES_H__
#define __LINUXCPP_TYPES_H__


// char
typedef char xbyte_t;

typedef signed char xint8_t;

typedef unsigned char xuint8_t;


// 整数
typedef signed short xint16_t;

typedef unsigned short xuint16_t;

typedef signed int xint32_t;

typedef unsigned int xuint32_t;

typedef signed long long xint64_t;

typedef unsigned long long xuint64_t;

typedef xuint32_t xtime32_t;

typedef xuint64_t xtime64_t;


// 浮点数
typedef float  xsingle_t;

typedef double xdouble_t;


// void 指针
typedef void *  xhandle_t;

typedef void *  xpvoid_t;



#endif /* __LINUXCPP_TYPES_H__ */
