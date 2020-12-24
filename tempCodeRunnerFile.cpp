#include <iostream>
using namespace std;

int main()
{
    const int a = 10;
    auto &a2 = a;
    cout << &a2 << endl;
    cout << &a << endl;
    return 0;
}
