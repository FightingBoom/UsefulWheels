#include "include.h"
#include "ModuleTest.h"
#include "CppWheels_String.h"

int main()
{
    Test_SplitString();
    return 0;
}


void Test_SplitString()
{
    std::string sInData = {"Hello_Word_zhaochen"};
    // std::string sInData {"111111_222222_333333"};
    // std::string sInData = {"编码小二"};  // 编码问题，导致乱码
    std::string sCharacter {"_"};
    std::vector<std::string> vOutData;

    SplitString(sInData, vOutData, sCharacter);

    printf("sInData = %s\n", sInData.c_str());
    printf("vOutData.size = %ld\n", vOutData.size());
    for(int i = 0; i < vOutData.size(); i++)
    {
        printf("vOutData[%d] = %s\n", i, vOutData.at(i).c_str());
    }
}

