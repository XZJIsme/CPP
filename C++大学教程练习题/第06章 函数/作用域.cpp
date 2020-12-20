#include <iostream>
using namespace std;
int x = 5;
void useStaticLocal()
{
    static auto x = 0;
    x++;
    cout << "Static x is " << x << endl;
}
int main()
{
    cout << "Global x in main is " << x << endl;
    int x = 1;
    {
        cout << endl;
        cout << "inner starts" << endl;
        int x = 10;
        cout << x << endl;
        cout << "inner ends" << endl;
    }
    cout << "Local x in main's outer scope is " << x << endl;

    cout << endl;
    useStaticLocal();
    useStaticLocal();
    useStaticLocal();

    cout << endl;
    return 0;
}