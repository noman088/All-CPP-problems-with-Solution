
// 5. Define a class Date and write a program to Display Date and initialise date object
// using Constructors.

#include <iostream>
using namespace std;
class Date
{
private:
    int h, m, s;

public:
    Date(int H, int M, int S)
    {
        h = H;
        m = M;
        s = S;
    }
    void diplay()
    {
        cout << "hours = " << h << ", Minute = " << m << ", Second = " << s << endl;
    }
};

int main()
{
    Date d1(1, 20, 45);
    d1.diplay();

    return 0;
}