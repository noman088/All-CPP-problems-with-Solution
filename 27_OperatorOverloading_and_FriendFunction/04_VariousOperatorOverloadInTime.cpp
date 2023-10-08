
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.
// Output -

// Enter First Time
// ----------------------------
// Enter Hours   :   24

// Enter Minutes :   30

// Enter Second  :   40

// First Time
// Hours    : 24
// Minutes  : 30
// Second   : 40

// Enter Second Time
// ----------------------------
// Enter Hours   :   24

// Enter Minutes :   30

// Enter Second  :   40

// First Time
// Hours    : 24
// Minutes  : 30
// Second   : 40

// Times are same

#include <iostream>
using namespace std;
class Time
{
private:
    int hour, minute, second;

public:
    Time(){};
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    bool operator==(Time x)
    {
        if (x.hour == hour && x.minute == minute && x.second == second)
            return 1;

        return 0;
    }

    friend istream &operator>>(istream &input, Time &t);
    friend ostream &operator<<(ostream &print, Time &t);
};
ostream &operator<<(ostream &print, Time &t)
{
    print << "Hour = " << t.hour << " Minutes = " << t.minute << " Second = " << t.second << endl;
    return print;
}
istream &operator>>(istream &input, Time &t)
{
    cout << "Enter hour     : " << endl;
    input >> t.hour;
    cout << "Enter minutes  :" << endl;
    input >> t.minute;
    cout << "Enter second   :" << endl;
    input >> t.second;

    return input;
}
int main()
{

    Time t1, t2;
    cout << "Enter First Time : " << endl;
    cout << "-------------------" << endl;
    cin >> t1;
    cout << "Enter Second Time : " << endl;
    cout << "-------------------" << endl;
    cin >> t2;

    cout << "As You Enter Your time is: " << endl;
    cout << t1 << t2 << endl;
    if (t1 == t2)
    {
        cout << "Both Time are same  " << endl;
    }
    else
        cout << "Both Time Different " << endl;

        return 0;
}