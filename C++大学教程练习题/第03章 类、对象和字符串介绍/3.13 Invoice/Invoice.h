#include <string>
#include <iostream>
#include <iomanip>

class Invoice
{
public:
    Invoice(std::string id, std::string describe, int sal, int prce)
        : ID("NULL"), description(describe), sales(sal), price(-1) 
    {
        this->ID = id;
        // price = prce;
    }
    void information()
    {
        std::cout << std::left;
        std::cout << std::setw(25) << "ID: " << ID << std::endl;
        std::cout << std::setw(25) << "description: " << description << std::endl;
        std::cout << std::setw(25) << "sales: " << sales << std::endl;
        std::cout << std::setw(25) << "price: " << price << std::endl;
    }

private:
    std::string ID, description;
    int sales, price;
};
