// 4. Define a class Counter and Write a program to Show Counter using Constructor.

#include <iostream>
using namespace std;
class counter
{
private:
    int count;

public:
    counter()
    {
        count = 0;
    }
    void increment()
    {
        count++;
    }
    int getValue()
    {
        return count;
    }
};
int main()
{
    counter n;
    cout << n.getValue() << endl;

    n.increment();
    cout << n.getValue();

    return 0;
}