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
    }; // 声明 Monday、Tuesday 等为符号常量，通常称之为枚举量，其值默认分别为 0-6
    /*
    不能将非枚举量赋给枚举变量，那么能不能将枚举量赋给非枚举变量呢？
    如：int a=Monday; 这是允许的，因为枚举量是符号常量，
    这里的赋值编译器会自动把枚举量转换为int类型。
    */

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