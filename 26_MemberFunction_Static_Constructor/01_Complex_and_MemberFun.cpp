// Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)
#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int Imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        Imaginary = b;
    }
    void showData()
    {
        cout << "Real = " << real << " Imaginary = " << Imaginary << endl;
    }
    Complex add(Complex X)
    {
        Complex temp;
        temp.real = X.real + real;
        temp.Imaginary = X.Imaginary + Imaginary;
        return temp;
    }
};
int main()
{
    Complex c1, c2,c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1.add(c2);
    c1.showData();
    c2.showData();
    c3.showData();

    return 0;
}