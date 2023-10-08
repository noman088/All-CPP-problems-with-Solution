// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle

#include <iostream>
using namespace std;
float Area(int radius)
{
    return 2.14 * radius * radius;
}
double Area(double length, int width)
{
    return length * width;
}
float Area(int base, int height )
{
    return 0.5 * base * height;
}
int main()
{

    cout << "Area of Circle is " << Area(5) << endl;
    cout << "Area of Rectangle is " << Area(5, 10) << endl;
    cout << "Area of triangle is " << Area(10, 20) << endl;

    return 0;
}