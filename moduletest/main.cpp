#include <iostream>
#include "../include/commondefine.h"

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

    printf("common define test end...\n");
    // while(1) ; // Windows环境CMD窗口测试，保持显示
}



