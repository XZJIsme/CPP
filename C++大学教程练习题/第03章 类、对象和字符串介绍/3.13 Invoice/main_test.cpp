#include <iostream>
#include <string>

#include "Invoice.h"

using namespace std;
int main()
{
    Invoice invoice("TEST_ID","TEST_DESCRIPTION",5000,50);
    invoice.information();
    return 0;
}
