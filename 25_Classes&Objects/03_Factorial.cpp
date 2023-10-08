// Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include <iostream>
using namespace std;
class Factorial
{
public:
    int N;
    int fact;

public:
    int fact()
    {
        return fact;
    }

    void setN(int a)
    {
        N = a;
    }
    int getN()
    {
        return N;
    }
    int calculatefactorial()
    {
        if (N <= 0)
        {

            fact = 1;
            return 0;
        }
        int f = 1;
        for (int i = N; i >= 1; i--)
        {
            f = f * i;
        }
        fact = f;
        return fact;
    }
};
int main()
{
    Factorial f1;
    f1.setN(3);
    cout << "Factorial of " << f1.getN() << " is " << f1.calculatefactorial() << endl;

    return 0;
}