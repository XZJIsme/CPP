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
    对于枚举，只定义了赋值运算符，没有为枚举定义算术运算。
    不过，枚举量能参与其他类型变量的运算。
    */
    enumType Weekday = Tuesday;
    enumType Weekday2 = enumType(3);
    // cout << Weekday2 << endl;
    enumType Weekday3 = (enumType)3;
    // cout << Weekday3 << endl;
    Weekday = enumType(123.93); // 结果将是不确定的，这么做不会出错
    // cout << Weekday << endl; // 不过我试验了几下，好像没什么问题，会输出相应的数字

    enum enumType_with_自定义枚举量的值
    {
        A_enum = 1,
        B_enum, // default 2
        C_enum = 10,
        D_enum // default 11
    };
    cout << D_enum << endl;
    auto test = B_enum;
    cout << test << endl;
    enumType_with_自定义枚举量的值 test_强制赋值范围 = enumType_with_自定义枚举量的值(100);
    cout << test_强制赋值范围 << endl; // Whatever，反正说是非法的
    // 枚举的上限是 大于最大枚举量的 最小的 2 的幂，减去 1；

    // 也有这种用法，不指定名字
    enum
    {
        one = 1,
        two,
        three,
        ten = 10
    };
    // 相当于 static const int one = 0;

    // enum Side
    // {
    //     Right,
    //     Left
    // };
    // enum Thing
    // {
    //     Wrong,
    //     Right
    // }; // 这样就不行
    cout << "one + ten = " << one + ten << endl;

    enumType_with_自定义枚举量的值 test66 = A_enum + D_enum; // 报错，无法从“int”转换为“main::enumType_with_自定义枚举量的值
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

// C++11
// 强类型枚举使用enum class语法来声明
// enum class Enumeration
// {
//     VAL1,
//     VAL2,
//     VAL3 = 100,
//     VAL4
// };
// 
// 另外枚举类型所使用的类型默认为int类型，也可指定其他类型：
// enum class Enum:unsigned int{VAL1,VAL2};
// 