#include <string>

class Invoice
{
public:
    Invoice(std::string id, std::string describe, int sal, int prce) : ID(id), description(describe), sales(sal), price(prce) {}
    void information()
    {
        std::cout << "ID:\t" << ID << std::endl;
        std::cout << "description:\t" << description << std::endl;
        std::cout << "ID:\t" << ID << std::endl;
        std::cout << "ID:\t" << ID << std::endl;
    }

private:
    std::string ID, description;
    int sales, price;
};
