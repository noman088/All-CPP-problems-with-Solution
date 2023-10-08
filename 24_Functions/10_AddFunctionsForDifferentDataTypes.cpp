// 10. Write functions using function overloading to add two numbers having different data
// types

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
double add(double c, double d)
{
    return c + d;
}
int main()
{
    int a = 2, b = 4;
    double c = 4.8, d = 8.4;
    cout << "Adding integers values a  and b  = " << add(a, b) << endl;
    cout << "Adding real values c  and d  = " << add(c, d) << endl;
    return 0;
}