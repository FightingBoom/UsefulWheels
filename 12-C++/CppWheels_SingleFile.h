#ifndef __CPPWHEELS_SINGLEFILE_H__
#define __CPPWHEELS_SINGLEFILE_H__

#include <iostream>
#include <string>
#include <vector>

#ifdef __cplusplus
extern "C"{
#endif

/*
 * 描述：以特定字符sCharacter，对字符串sInData进行分割，结果放入vOutData中
 * 举例：
 *      sInData: "111111_222222_333333"
 *      sCharacter: "_"
 *      vOutData: "111111","222222","333333"
 */
__CRT_INLINE void SplitString(const std::string & sInData, std::vector<std::string> & vOutData, const std::string & sCharacter)
{
    std::string::size_type pos1, pos2;  // string特殊偏移量类型

    pos2 = sInData.find(sCharacter);    // 找到第一个字符sCharacter位置
    pos1 = 0;

    while(std::string::npos != pos2)    // 如果pos2不到sInData结尾
    {
        vOutData.push_back(sInData.substr(pos1, pos2 - pos1));  // 存放第一个字符串
        pos1 = pos2 + sCharacter.size();                        // pos1指向下一段字符串的起始位置
        pos2 = sInData.find(sCharacter, pos1);                  // pos2指向下一个字符sCharacter位置，未找到则返回npos
    }

    if(pos1 != sInData.length())        // 截取最后一段字符串
    {
        vOutData.push_back(sInData.substr(pos1));
    }
}

#ifdef __cplusplus
}
#endif

#endif
