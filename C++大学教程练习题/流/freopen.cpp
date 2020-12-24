#include <iostream>
using namespace std;
int main()
{
    freopen("test_txt.txt", "a+", stdout);
    cout << "APP"
         << "!";
    fclose(stdout);

    return 0;
}