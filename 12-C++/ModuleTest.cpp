#include "CppWheels_SingleFile.h"

/*
 * 测试结果如下
PS E:\91-GitRepository\UsefulWheels\12-C++> cd "e:\91-GitRepository\UsefulWheels\12-C++\" ; if ($?) { g++ ModuleTest.cpp -o ModuleTest } ; if ($?) { .\ModuleTest }
sInData = Hello_Word_zhaochen
vOutData.size = 3
vOutData[0] = Hello
vOutData[1] = Word
vOutData[2] = zhaochen       
PS E:\91-GitRepository\UsefulWheels\12-C++>
 */
void Test_SplitString()
{
    std::string sInData = {"Hello_Word_zhaochen"};
    // std::string sInData {"111111_222222_333333"};
    // std::string sInData = {"编码小二"};  // 编码问题，导致乱码
    std::string sCharacter {"_"};
    std::vector<std::string> vOutData;

    SplitString(sInData, vOutData, sCharacter);

    printf("sInData = %s\n", sInData.c_str());
    printf("vOutData.size = %d\n", vOutData.size());
    for(int i = 0; i < vOutData.size(); i++)
    {
        printf("vOutData[%d] = %s\n", i, vOutData.at(i).c_str());
    }
}

int main()
{
    Test_SplitString();
    return 0;
}
