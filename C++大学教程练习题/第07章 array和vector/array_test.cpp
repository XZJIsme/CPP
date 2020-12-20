#include <array>
#include <iostream>
using namespace std;
int main()
{
    array<double, 10> a = {0};
    for (const auto &i : a)
    {
        cout << i << endl;
    }
    return 0;
}
