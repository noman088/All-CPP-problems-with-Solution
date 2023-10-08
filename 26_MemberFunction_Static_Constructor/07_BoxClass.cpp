// 7. Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.
#include <iostream>
using namespace std;
class Box
{
private:
    int length, breadth, height;

public:
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    double volume()
    {
        return length * breadth * height;
    }
};
int main()
{
    Box b1(2, 3, 4);
    Box b2(4, 4, 4);
    cout << "Volume of b1 is " << b1.volume() << endl;
    cout << "Volume of b2 is " << b2.volume() << endl;

    return 0;
}