#include <iostream>
using namespace std;
class Circle
{
public:
    int radius;
    float Area;

public:
    void setRadius(int a)
    {
        radius = a;
    }
    void findArea()
    {
        Area = 3.14 * radius * radius;
    }
    int getradius()
    {
        return radius;
    }
    float area()
    {
        return Area;
    }
};
int main()
{

    Circle c1;
    c1.setRadius(5);
    c1.findArea();
    cout << "Area of  a circle of redius" << c1.getradius() << " is " << c1.area() << endl;
    return 0;
}