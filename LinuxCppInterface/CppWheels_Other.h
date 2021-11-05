#ifndef __CPPWHEELS_OTHER_H__
#define __CPPWHEELS_OTHER_H__

#include "BasicInclude.h"
#include "Linuxcpptypes.h"

/*
 * 输入：linux cmd 命令
 * 输出：命令执行结果字符串 result
 */
xint32_t ExecuteCMD(const xbyte_t *cmd, xbyte_t *result);

#endif