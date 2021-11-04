#include "BasicInclude.h"
#include "ModuleTest.h"
#include "CppWheels_String.h"
#include "Linuxcpptypes.h"

int main()
{
    Test_SplitString();

    Test_TypeSizeProcess();

    return 0;
}


void Test_SplitString()
{
    printf("\n----------------Test_SplitString Start\n");

    std::string sInData = {"Hello_Word_zhaochen"};
    // std::string sInData {"111111_222222_333333"};
    // std::string sInData = {"编码小二"};  // 编码问题，导致乱码
    std::string sCharacter {"_"};
    std::vector<std::string> vOutData;

    SplitString(sInData, vOutData, sCharacter);

    printf("sInData = %s\n", sInData.c_str());
    printf("vOutData.size = %ld\n", vOutData.size());
    for(xint32_t i = 0; i < vOutData.size(); i++)
    {
        printf("vOutData[%d] = %s\n", i, vOutData.at(i).c_str());
    }

    printf("----------------Test_SplitString End\n\n");
}


void Test_TypeSizeProcess()
{
    printf("\n----------------Test_TypeSizeProcess Start\n");

    printf("sizeof(xbyte_t) = %ld\n", sizeof(xbyte_t));
    printf("sizeof(xint8_t) = %ld\n", sizeof(xint8_t));
    printf("sizeof(xuint8_t) = %ld\n", sizeof(xuint8_t));

    printf("----------------\n");

    printf("sizeof(xint16_t) = %ld\n", sizeof(xint16_t));
    printf("sizeof(xuint16_t) = %ld\n", sizeof(xuint16_t));
    printf("sizeof(xint32_t) = %ld\n", sizeof(xint32_t));
    printf("sizeof(xuint32_t) = %ld\n", sizeof(xuint32_t));
    printf("sizeof(xint64_t) = %ld\n", sizeof(xint64_t));
    printf("sizeof(xuint64_t) = %ld\n", sizeof(xuint64_t));
    printf("sizeof(xtime32_t) = %ld\n", sizeof(xtime32_t));
    printf("sizeof(xtime64_t) = %ld\n", sizeof(xtime64_t));

    printf("----------------\n");

    printf("sizeof(xsingle_t) = %ld\n", sizeof(xsingle_t));
    printf("sizeof(xdouble_t) = %ld\n", sizeof(xdouble_t));

    printf("----------------\n");

    printf("sizeof(xhandle_t) = %ld\n", sizeof(xhandle_t));
    printf("sizeof(xpvoid_t) = %ld\n", sizeof(xpvoid_t));

    printf("----------------Test_TypeSizeProcess End\n\n");
}

