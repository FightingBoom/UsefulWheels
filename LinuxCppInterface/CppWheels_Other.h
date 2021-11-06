#ifndef __CPPWHEELS_OTHER_H__
#define __CPPWHEELS_OTHER_H__

#include "BasicInclude.h"
#include "Linuxcpptypes.h"

/*
 * 输入：linux cmd 命令
 * 输出：命令执行结果字符串 result
 */
xint32_t ExecuteCMD(const xbyte_t *cmd, xbyte_t *result);


/*
 * 输入: 执行命令
 * 输出: 命令执行结果字符串
 * 封装ExecuteCMD接口，使其返回结果为字符串类型
 */
std::string SystemWithResult(const char *cmd);


#endif