// Define a class Rectangle and define an instance member function to find the area of
// the rectangle

#include<iostream>
using namespace std;
class Rectangle
{
private:
    int l, b, area;

public:
void setlb(int x,int y)
{
    l = x;
    b = y;
}
void fingArea()
{
    area = l * b;
}
int Area()
{
    return area;
}
   
};

int main()
{
Rectangle r1;
r1.setlb(3, 6);
r1.fingArea();
cout << "Area of Rectangle is " << r1.Area() << endl;

return 0 ;
}