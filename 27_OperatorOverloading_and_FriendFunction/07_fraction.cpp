// 7. Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// Public:
// fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// (a). Unary ++ (pre and post both)
// (b). Overload as friend functions: operators << and >>.
#include <iostream>
using namespace std;

class fraction
{
private:
    long numerator;
    long denominator;

public:
    fraction(long n = 0, long d = 0)
    {
        numerator = n;
        denominator = d;
    }

    fraction operator++(int useless) // this is post Increment
    {

        fraction temp(*this); // it is necessary to applied in post increment . because post increment return it's main value before increment
        temp.numerator = numerator++;
        temp.denominator = denominator++;
        return temp;
    }

    // fraction operator++()
    // {
    //     numerator = ++numerator;
    //     denominator = ++denominator;
    // }

    // following line is by chatGpt
    fraction operator++()
    {
        ++numerator;
        ++denominator;
        return *this;
    }

    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
    friend istream &operator>>(istream &input, fraction &x);

    friend ostream &operator<<(ostream &print, fraction);
};
istream &operator>>(istream &input, fraction &x)
{
    cout << "Enter numerator" << endl;
    input >> x.numerator;
    cout << "Enter Denominator" << endl;
    input >> x.denominator;
    return input;
}
ostream &operator<<(ostream &print, fraction a)
{
    print << a.numerator << "/" << a.denominator << endl;
}
int main()
{
    fraction f1(3, 4), f2(1, 2), f3;
    ++f1;
    cout << f1;
    f2++;
    cout << f2;// not increment because f2 is post increment

    cin >> f3;// take input
    cout << f3; // output

    return 0;
}