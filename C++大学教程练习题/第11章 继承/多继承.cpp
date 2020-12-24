#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }

protected:
    int width, height;
};

class PaintCost
{
public:
    int getCost(int area)
    {
        cost = area * 70;
        cout << this->cost << endl;
        return area * 70;
    }

private:
    int cost;
};

class Rectangle : public Shape, public PaintCost
{
public:
    int getArea() { return (width * height); }
};

int main()
{
    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(7);
    Rect.getCost(Rect.getArea());
}
