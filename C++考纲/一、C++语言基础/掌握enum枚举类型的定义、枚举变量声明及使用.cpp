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
    */

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