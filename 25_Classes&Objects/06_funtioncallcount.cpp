#include <iostream>
using namespace std;
int count = 0;
class Squar
{
private:
    int a;
    int a2;
    static int count;

public:
    int getSquare()
    {
        return a2;
    }
    void setData(int s)
    {
        a = s;
    }
    int getData()
    {
        return a;
    }
    int getcount()
    {
        return count;
    }
    void calculatesquar()
    {
        count++;
        int sq = a * a;

        a2 = sq;
    }
};
int Squar::count = 0;
int main()
{
    Squar s1, s2;
    s1.setData(2);
    s2.setData(4);
    s1.calculatesquar();
    s2.calculatesquar();

    cout << s1.getcount() << " times squar() called" << endl;
    cout << " Square of " << s1.getData() << " is " << s1.getSquare() << endl;
    cout << " Square of " << s2.getData() << " is " << s2.getSquare() << endl;

    return 0;
}