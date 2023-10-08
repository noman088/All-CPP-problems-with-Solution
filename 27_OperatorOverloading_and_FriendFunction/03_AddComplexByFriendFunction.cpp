
// 3. Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.

#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex() {}
    Complex(int s, int t)
    {
        real = s;
        imag = t;
    }
    void display()
    {
        cout << "Real = " << real << " Imaginary = " << imag << endl;
    }
    // Complex operator+(Complex y)
    // {
    //     Complex temp;
    //     temp.real = real + y.real;
    //     temp.imag = imag + y.imag;
    //     return temp;
    // }

    friend Complex operator+(Complex x, Complex y);
};

Complex operator+(Complex x, Complex y)
{
    Complex temp;
    temp.real = x.real + y.real;
    temp.imag = x.imag + y.imag;
    return temp;
}
int main()
{
    Complex c1(1, 2), c3;
    Complex c2(3, 2);
    c3 = c1 + c2;
    c3.display();

    return 0;
}