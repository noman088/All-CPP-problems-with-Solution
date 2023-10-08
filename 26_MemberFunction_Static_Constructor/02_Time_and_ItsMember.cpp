// Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
#include <iostream>
using namespace std;
class Time
{
private:
    int h, m, s;

public:
    void setTime(int a, int b, int c)
    {
        h = a;
        m = b;
        s = c;
    }
    void showTime()
    {
        cout << "Hour = " << h << " ,  Minute = " << m << " ,  Second = " << s << endl;
    }
    Time add(Time X)

    {
        Time temp;
        temp.h = h + X.h;
        temp.m = m + X.m;
        temp.s = s + X.s;
        return temp;
    }

 
};
int main()
{
    Time t1, t2, t3;
    t1.setTime(2, 15, 30);
    t1.showTime();
    t2.setTime(1, 30, 15);
    t2.showTime();
    t3 = t1.add(t2);
    t3.showTime();

    return 0;
}
