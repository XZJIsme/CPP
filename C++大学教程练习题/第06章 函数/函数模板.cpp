#include <iostream>
using namespace std;

template <class T> // template <typename T>
T maximum(T v1, T v2, T v3)
{
    T temp = v1;
    if (v2 > v1)
        temp = v2;
    if (v3 > v1)
        temp = v3;
    return v3;
}

// C++ 11
template <typename T>
auto max2(T x, T y) -> T
{
    if (x > y)
        return x;
    else 
        return y;
}

int main()
{
    cout << maximum(1, 2, 3) << endl;
    return 0;
}
