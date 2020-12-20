#include <bits/stdc++.h>
using namespace std;

void f(int a = 1, int b, int c = 3)
{ // 默认实参.cpp(5): error C2548: “f”: 缺少形参 2 的默认实参
    cout << a * b * c << endl;
}

int main()
{
    // f(1, 3);
    return 0;
}