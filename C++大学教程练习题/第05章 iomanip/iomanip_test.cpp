#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a = 10912.12999332;
    int b = 123;
    cout << setfill('#');
    cout << setbase(16) << b << ' ' << b << endl;
    // setbase()��һ���ԣ�������Ч 
    cout << setw(30) << b;
    // �������setw()��һ���Ե� 
    cout << b << endl;
    cout << skipws << ' ' << b;
    cout << "����������һ��fixed��cout��fixed�ͻ�����" << fixed << endl;
    cout << 1897897.12123987 << endl;
    cout << a << endl;
    cout << scientific << a << endl;
    cout << setw(35) << endl;
    cout << a << endl;
    cout << a << endl;
    return 0;
}

/* output start
7b 7b
############################7b7b
 7b����������һ��fixed��cout��fixed�ͻ�����
1897897.121240
10912.129993
1.091213e+04

#######################1.091213e+04
1.091213e+04
end */