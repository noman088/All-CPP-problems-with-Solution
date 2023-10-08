// 1. Define a function to check whether a given number is a Prime number or not.


#include <iostream>
using namespace std;
void prime(int n)
{
    int  flag = 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        if(flag)
        break;
    
    }
    if (flag == 0)
        cout << "Number is Prime" << endl;
    if (flag == 1)
        cout << "Number is not Prime";
}
int main()
{
    int a;
    cout << "Enter a Number" << endl;
    cin >> a;
    prime(a);

    return 0;
}