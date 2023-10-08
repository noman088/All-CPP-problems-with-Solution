// 2. Define a function to find the highest value digit in a given number.

#include<iostream>
int HighestValueDigit(int n)
{
    int highest=0;
    while(n)
    {
        int r = 0;
        r = n % 10;
        if(r>highest)
            highest = r;
        n = n / 10;
    }
    return highest;
}
using namespace std;
int main()
{
    int num;
    cout << "Enter a Number" << endl;
    cin >> num;
    cout << "Highest Value Digit in this Number is " << HighestValueDigit(num) << endl;
    return 0;
}