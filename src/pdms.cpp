#include "../include/pdms.h"
#include <cstdlib>
#include <vector>

std::vector<address> addressData;

// 清屏函数，区别 windows 和 linux 系统
void clearScreen()
{
    #ifdef WIN32
        system("clr");
    #elif __linux__
        system("clear");
    #endif // 系统分类
}
