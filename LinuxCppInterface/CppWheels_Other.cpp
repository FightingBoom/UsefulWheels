#include "CppWheels_Other.h"


xint32_t ExecuteCMD(const xbyte_t *cmd, xbyte_t *result)
{
    xint32_t iRet = -1;
    xbyte_t buf_ps[1024];
    xbyte_t ps[1024] = {0};
    FILE *ptr;

    strcpy(ps, cmd);    // 将cmd拷贝到ps，避免直接对 const char * 变量操作

    if((ptr = popen(ps, "r")) != NULL)
    {
        while(fgets(buf_ps, sizeof(buf_ps), ptr) != NULL)
        {
            strcat(result, buf_ps);     // 将buf_ps追加到result后边
            if(strlen(result) > 1024)   // 判断result长度
            {
                break;
            }
        }
        pclose(ptr);
        ptr = NULL;
        iRet = 0;  // 处理成功
    }
    else
    {
        printf("popen %s error\n", ps);
        iRet = -1; // 处理失败
    }

    return iRet;
}
