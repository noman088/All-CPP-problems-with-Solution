// Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number.
#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void print()
    {
        cout << "real = " << real << " Imaginary = " << imaginary << endl;
    }
};
int main()
{

    Complex c1;
    c1.setData(2, 3);
    c1.print();
    

    return 0;
}