
// 7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>
using namespace std;
int sum(int a, int b, int c = 0)
{
    int z = a + b + c;
    return z;
}
int main()
{
    int a = 7;
    int b = 8;
    int c = 9;
    cout << "Sum of a and b is " << sum(a, b) << endl;
    cout << "sum of a and b and c is " << sum(a, b, c) << endl;

    return 0;
}