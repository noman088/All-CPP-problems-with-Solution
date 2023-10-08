// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==

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

    Complex operator+(Complex X)
    {
        Complex temp;
        temp.real = X.real + real;
        temp.imag = X.imag + imag;
        return temp;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.real = real - C.real;
        temp.imag = imag - C.imag;
        return temp;
    }
    Complex operator*(Complex x)
    {
        Complex temp;
        temp.imag = real * x.real;
        temp.imag = real * x.imag;
        return temp;
    }
    int operator==(Complex Y)
    {
        if ((real == Y.real) && (imag == Y.imag))
            return 1;
        return 0;
    }
    void display()
    {
        cout << "real = " << real << " Imaginary = " << imag << endl;
    }
};

int main()
{
    Complex c1(2, 3), c3(3, 4), c4, c5;
    Complex c2 = c1;
    c3 = c1 + c2;
    c3.display();
    c4 = c3 - c2;
    c4.display();
    c5 = c1 * c3;
    c3.display();

    if (c1 == c2)
        cout << "Both are Equal" << endl;
    else
        cout << "Both are not Equal" << endl;
    if (c1 == c3)
        cout << "Both are Equal" << endl;
    else
        cout << "Both are not Equal" << endl;

    return 0;
}