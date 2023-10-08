// 2. Write a C++ program to overload unary operators that is increment and decrement.

#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex() {}
    Complex(int x, int y)
    {
        real = x;
        imag = y;
    }
    void operator++()
    {
        real = ++real;
        imag = ++imag;
    }
    void operator++(int dummy)
    {
        real = real++;
        imag = imag++;
    }
    void operator--()
    {
        real = --real;
        imag = --imag;
    }
    void operator--(int dummy)
    {
        real = real--;
        imag = imag--;
    }
    void display()
    {
        cout << " real = " << real << " Imag = " << imag << endl;
    }
};

int main()
{

    Complex c1(2, 3);
    c1++;
    c1.display();
    ++c1;
    c1.display();
    c1--;
    c1.display();
    --c1;
    c1.display();

    return 0;
}