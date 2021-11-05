#ifndef __LINUXCPP_TYPES_H__
#define __LINUXCPP_TYPES_H__

/*
环境：Linux ubuntu2004 5.11.0-38-generic；
G++版本：gcc version 9.3.0 (Ubuntu 9.3.0-17ubuntu1~20.04) 
----------------Test_TypeSizeProcess Start
sizeof(xbyte_t) = 1
sizeof(xint8_t) = 1
sizeof(xuint8_t) = 1
----------------
sizeof(xint16_t) = 2
sizeof(xuint16_t) = 2
sizeof(xint32_t) = 4
sizeof(xuint32_t) = 4
sizeof(xint64_t) = 8
sizeof(xuint64_t) = 8
sizeof(xtime32_t) = 4
sizeof(xtime64_t) = 8
----------------
sizeof(xsingle_t) = 4
sizeof(xdouble_t) = 8
----------------
sizeof(xhandle_t) = 8
sizeof(xpvoid_t) = 8
----------------Test_TypeSizeProcess End
*/

// bool
typedef bool BOOL;

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
