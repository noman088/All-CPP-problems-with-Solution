// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.
#include <iostream>
using namespace std;
class StaticCount
{
private:
    static int x;

public:
    StaticCount(int n)
    {
        x = n;
    }
    StaticCount(){}
    int increment()
    {

        x++;
    }
    void display()
    {
        cout << x << endl;
    }
};
int StaticCount::x;
int main()
{
    StaticCount s(1);
    s.increment();
    s.increment();
    s.increment();
    s.display();

    return 0;
}