#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a = 10912.12999332;
    int b = 123;
    cout << setfill('#');
    cout << setbase(16) << b << ' ' << b << endl;
    // setbase()非一次性，往后都有效 
    cout << setw(30) << b;
    // 宽度设置setw()是一次性的 
    cout << b << endl;
    cout << skipws << ' ' << b;
    cout << "这里设置了一次fixed，cout完fixed就换行了" << fixed << endl;
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
 7b这里设置了一次fixed，cout完fixed就换行了
1897897.121240
10912.129993
1.091213e+04

#######################1.091213e+04
1.091213e+04
end */