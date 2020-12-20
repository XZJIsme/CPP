#include <iostream>

using namespace std;

class A
{
    int a;
};

class B
{
    int b;
};

class C : public A
{
    int c;
};

int main()
{
    B *b = new B;
    C *c = new C;
    A *pA2 = static_cast<A *>(c);

    return 0;
}
