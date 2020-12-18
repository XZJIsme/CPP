#include <iostream>
using namespace std;
int main()
{
    enum enumType
    { // 第一：声明 enumType 为新的数据类型，称为枚举(enumeration);
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };
    return 0;
}

/*
 * C/C++ 语言可以使用 #define 和 const 创建符号常量
 * 例如：const int a = 15;
 * 例如：#define a 15
 *
 * 而使用 enum 工具不仅能够创建符号常量，还能定义新的数据类型
 * 但是必须按照一定的规则进行
*/