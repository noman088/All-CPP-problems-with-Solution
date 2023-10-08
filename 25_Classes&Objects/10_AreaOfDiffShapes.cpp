#include <iostream>
using namespace std;

class AreaOfShapes
{

private:
    int radius, length, breath;
    float Area;

public:
    void setRadius(int r)
    {
        radius = r;
    }
    void setLength(int l)
    {
        length = l;
    }
    void setL_and_B(int a, int b)
    {
        length = a;
        breath = b;
    }
    void findCircle()
    {
        Area = 3.14 * radius * radius;
    }
    void findRectangle()
    {
        Area = length * breath;
    }
    void findSquare()
    {
        Area = length * length;
    }
    float area()
    {
        return Area;
    }
};
int main()
{
    AreaOfShapes R1, C1, S1;
    R1.setL_and_B(4, 5);
    R1.findRectangle();
    cout << "Area of Rectangle is " << R1.area() << endl;

    C1.setRadius(8);
    C1.findCircle();
    cout << "Area of Circle is " << C1.area() << endl;

    S1.setLength(9);
    S1.findSquare();
    cout << "Area of Squar is " << S1.area() << endl;

    return 0;
}