// 3. Define a function to calculate x raised to the power y.
#include <iostream>
using namespace std;
int power(int number, int P)
{
    int value = 1;
    for (int i = 0; i < P; i++)
    {
        value = value * number;
    }
    return value;
}

int main()
{
    int x, y;
    cout << "Enter  Value of x" << endl;
    cin >> x;
    cout << "Enter value of y" << endl;
    cin >> y;
    cout << x<<"^" << y <<" = " << power(x, y) << endl;

    return 0;
}