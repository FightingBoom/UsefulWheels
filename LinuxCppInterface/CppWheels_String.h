#ifndef __CPPWHEELS_STRING_H__
#define __CPPWHEELS_STRING_H__

#include "BasicInclude.h"

/*
 * 描述：以特定字符sCharacter，对字符串sInData进行分割，结果放入vOutData中
 * 举例：
 *      sInData: "111111_222222_333333"
 *      sCharacter: "_"
 *      vOutData: "111111","222222","333333"
 */
void SplitString(const std::string & sInData, std::vector<std::string> & vOutData, const std::string & sCharacter);

#endif