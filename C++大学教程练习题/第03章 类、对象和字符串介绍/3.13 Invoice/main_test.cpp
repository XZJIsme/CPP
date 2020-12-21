#include <iostream>
#include <string>
#include <stdexcept>

#include "Invoice.h"

using namespace std;
int main()
{
    Invoice invoice("TEST_ID", "TEST_DESCRIPTION", 5000, 50);
    invoice.information();

    // int a = -1;
    // if (a > 10)
    // {
    // }
    // else
    //     throw invalid_argument("fuck");
    // cout << "return 0;";

    return 0;
}
