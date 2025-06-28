// 5. Define a function to check whether a given number is a term in a Fibonacci series or
// not.
#include <iostream>
using namespace std;
void fibCheck(int number)
{
    int a = -1, b = 1, c = 0;

    while (c < number + 1)
    {
        c = a + b;
        if (c == number)
        {
            cout <<number<< " is  a  term in fibonacci series " << endl;
            return;
        }
        a = b;
        b = c;
    }
    cout <<number<< " is not a term in fibonacci series";
}

// this is just a line for making the commit consistencey and try to edit in the github page 
int main()
{
    int num;
    cout << "enter a number to check"<<endl;
    cin >> num;
    fibCheck(num);
    return 0;
}
