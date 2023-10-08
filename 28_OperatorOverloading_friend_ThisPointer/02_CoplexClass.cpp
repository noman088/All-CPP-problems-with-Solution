// 2. Define a class Complex with appropriate instance variables and member functions.
// One of the functions should be setData() to set the properties of the object. Make
// sure the names of formal arguments are the same as names of instance variables.

#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    complex(){};
    complex(int r, int i);
    void setdata(int, int);
    void display()
    {
        cout << endl;
        cout << "Complex = " << real << " + " << imag << "i" << endl;
    }
};
void complex::setdata(int real, int imag)
{
    this->real = real;
    this->imag = imag;
}

complex::complex(int r, int i)
{
    real = r;
    imag = i;
}
int main()
{
    complex c;
    c.setdata(4, 5);
    c.display();
    cout << endl;

    return 0;
}