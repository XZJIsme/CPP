#include <iostream>
using namespace std;
int main()
{
    enum enumType
    { // ��һ������ enumType Ϊ�µ��������ͣ���Ϊö��(enumeration);
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    }; // ���� Monday��Tuesday ��Ϊ���ų�����ͨ����֮Ϊö��������ֵĬ�Ϸֱ�Ϊ 0-6
       /*
    ���ܽ���ö��������ö�ٱ�������ô�ܲ��ܽ�ö����������ö�ٱ����أ�
    �磺int a=Monday; ��������ģ���Ϊö�����Ƿ��ų�����
    ����ĸ�ֵ���������Զ���ö����ת��Ϊint���͡�
    ����ö�٣�ֻ�����˸�ֵ�������û��Ϊö�ٶ����������㡣
    ������ö�����ܲ����������ͱ��������㡣
    */
    enumType Weekday = Tuesday;
    enumType Weekday2 = enumType(3);
    // cout << Weekday2 << endl;
    enumType Weekday3 = (enumType)3;
    // cout << Weekday3 << endl;
    Weekday = enumType(123.93); // ������ǲ�ȷ���ģ���ô���������
    // cout << Weekday << endl; // �����������˼��£�����ûʲô���⣬�������Ӧ������

    enum enumType_with_�Զ���ö������ֵ
    {
        A_enum = 1,
        B_enum, // default 2
        C_enum = 10,
        D_enum // default 11
    };
    cout << D_enum << endl;
    auto test = B_enum;
    cout << test << endl;
    enumType_with_�Զ���ö������ֵ test_ǿ�Ƹ�ֵ��Χ = enumType_with_�Զ���ö������ֵ(100);
    cout << test_ǿ�Ƹ�ֵ��Χ << endl; // Whatever������˵�ǷǷ���
    // ö�ٵ������� �������ö������ ��С�� 2 ���ݣ���ȥ 1��

    // Ҳ�������÷�����ָ������
    enum
    {
        one = 1,
        two,
        three,
        ten = 10
    };
    // �൱�� static const int one = 0;

    // enum Side
    // {
    //     Right,
    //     Left
    // };
    // enum Thing
    // {
    //     Wrong,
    //     Right
    // }; // �����Ͳ���
    cout << "one + ten = " << one + ten << endl;

    enumType_with_�Զ���ö������ֵ test66 = A_enum + D_enum; // �����޷��ӡ�int��ת��Ϊ��main::enumType_with_�Զ���ö������ֵ
    return 0;
}

/*
 * C/C++ ���Կ���ʹ�� #define �� const �������ų���
 * ���磺const int a = 15;
 * ���磺#define a 15
 *
 * ��ʹ�� enum ���߲����ܹ��������ų��������ܶ����µ���������
 * ���Ǳ��밴��һ���Ĺ������
*/

// C++11
// ǿ����ö��ʹ��enum class�﷨������
// enum class Enumeration
// {
//     VAL1,
//     VAL2,
//     VAL3 = 100,
//     VAL4
// };
// 
// ����ö��������ʹ�õ�����Ĭ��Ϊint���ͣ�Ҳ��ָ���������ͣ�
// enum class Enum:unsigned int{VAL1,VAL2};
// 