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
    };
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