#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width, height;
};

class Rectangle : public Shape
{
public:
    int getArea() { return (width * height); }
}

int
main()
{
    return 0;
}