#include <bits/stdc++.h>
using namespace std;

// void f(int a = 1, int b, int c = 3)
// { // Ĭ��ʵ��.cpp(5): error C2548: ��f��: ȱ���β� 2 ��Ĭ��ʵ��
//     cout << a * b * c << endl;
// }

void f(int a, int b = 3, int c = 10);

int main()
{
    f(3);
    return 0;
}

void f(int a, int b, int c)
{
    cout << a * b * c << endl;
}
