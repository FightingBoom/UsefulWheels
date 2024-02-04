#include <iostream>
#include "../include/commondefine.h"

void KphToMphDemo()
{
    printf("------------------------\n");
    printf("kph to mph %f\n", UWC_KPH_TO_MPH(80));
    int kmTemp = 80;
    int mileTemp = UWC_KPH_TO_MPH(kmTemp);
    printf("mph int %d\n", mileTemp);
    float mileTempFloat = UWC_KPH_TO_MPH(kmTemp);
    printf("mph float %f\n", mileTempFloat);
    double mileTempDouble = UWC_KPH_TO_MPH(kmTemp);
    printf("mph double %f\n", mileTempDouble);
    printf("------------------------\n");

/*
------------------------
kph to mph 49.709819
mph int 49
mph float 49.709820
mph double 49.709819
------------------------
*/
}

void MphToKphDemo()
{
    printf("------------------------\n");
    printf("mph to kph %f\n", UWC_MPH_TO_KPH(80));
    int mileTemp = 80;
    int kmTemp = UWC_MPH_TO_KPH(mileTemp);
    printf("kph int %d\n", kmTemp);
    float kmTempFloat = UWC_MPH_TO_KPH(mileTemp);
    printf("kph float %f\n", kmTempFloat);
    double kmTempDouble = UWC_MPH_TO_KPH(mileTemp);
    printf("kph double %f\n", kmTempDouble);
    printf("------------------------\n");

/*
------------------------
mph to kph 128.747200
kph int 128
kph float 128.747192
kph double 128.747200
------------------------
*/
}

int main()
{
    printf("common define test start...\n");
    printf("test %s\n", STRING_CONTACT(A, B));

    printf("------------------------\n");
    printf("test %s\n", STRING_TOSTR(str?));

    printf("------------------------\n");
    printf("min %d\n", UWC_MIN(0, 1));
    printf("min %d\n", UWC_MIN(0, -1));
    printf("min %d\n", UWC_MIN(0, 0));
    printf("min %d\n", UWC_MIN(-10, -50));
    printf("min %d\n", UWC_MIN(10, 40));

    printf("------------------------\n");
    printf("max %d\n", UWC_MAX(0, 1));
    printf("max %d\n", UWC_MAX(0, -1));
    printf("max %d\n", UWC_MAX(0, 0));
    printf("max %d\n", UWC_MAX(-10, -50));
    printf("max %d\n", UWC_MAX(10, 40));

    // 千米/小时 -> 英里/小时
    KphToMphDemo();

    // 英里/小时 -> 千米/小时
    MphToKphDemo();

    printf("number to string:%s\n", NumberToString(6).c_str());
    printf("number to string:%s\n", NumberToString(6.6).c_str());
    printf("number to string:%s\n", NumberToString(0).c_str());
    printf("number to string:%s\n", NumberToString(-100).c_str());
    printf("number to string:%s\n", NumberToString(10000).c_str());

    printf("common define test end...\n");
    // while(1) ; // Windows环境CMD窗口测试，保持显示
}



