// 6. Define a function to swap data of two int variables using call by reference
#include <iostream>
using namespace std;
void swap(int &p, int &p2)
{
    int temp = p;
    p = p2;
    p2 = temp;
}
int main()
{
    int a, b;
    cout << "Enter Two Numbers To swap " << endl;
    cin >> a >> b;
    cout << "Values before swap is : \n a = " << a << " And b = " << b << endl;
    swap(a,b);
    cout << "Values after  swap is : \n a = " << a << " And b = " << b << endl;

    return 0;
}