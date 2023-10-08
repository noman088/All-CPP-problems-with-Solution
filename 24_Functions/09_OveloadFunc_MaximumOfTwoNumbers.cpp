// 9. Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.

#include<iostream>
using namespace std;
int Max(int a ,int b)
{
    return (a > b) ? a : b;
}
double Max(double a ,double b)
{
    return (a > b) ? a : b;
}
int main()
{
    // define a and b as integer numbers 
    int a = 9, b = 10;
    // define c and d as double or real numbers
    double c = 54.6, d = 54.7;
    // compare integers numbers
    cout << "for integers " << Max(a, b) << endl;
    // compare real numbers
    cout << "for real " << Max(c, d) << endl;

    return 0;
}