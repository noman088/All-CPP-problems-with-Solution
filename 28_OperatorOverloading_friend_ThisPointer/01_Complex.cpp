// 1. Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator

#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    void setdat(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "Real = " << real << " Imaginary =" << img << "i" << endl;
        }
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    friend istream &operator>>(istream &, Complex &);
    friend ostream &operator<<(ostream &, Complex);
};

istream &operator>>(istream &input, Complex &x)
{
    cout << "Enter real part : ";
    input >> x.real;
    cout << "Enter Img Part : ";
    input >> x.img;
    return input;
}
ostream &operator<<(ostream &print, Complex x)
{
    print << "Real = " << x.real << " and Imaginary = " << x.img << "i" << endl;
}

int main()
{
    Complex c(4, 5), c2;
    cout << c << endl;

    cin >> c2;
    cout << c2;

    return 0;
}