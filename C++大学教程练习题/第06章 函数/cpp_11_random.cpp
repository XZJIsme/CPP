#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main()
{
    default_random_engine engine(time(0));
    uniform_int_distribution<long> randomInt(-101, 6); // <>������Ϊ��ģ��
    cout << randomInt(engine) << endl;
    uniform_real_distribution<float> randomReal(-10000, 100);
    cout << randomReal(engine) << endl;
    return 0;
}
