
// Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.

#include <iostream>
using namespace std;
class Gretest
{
private:
    int a, b, c, max;

public:
    void setValues(int first, int second, int third)
    {
        a = first;
        b = second;
        c = third;
    }
    void findGretest()
    {
        if (a > b && a > c)
            max = a;
        if (b > a && b > c)
            max = b;
        if (c > a && c > b)
            max = c;
        else
            max = c;
    }
int greatest(){
        return max;
}
};
int main()
{
Gretest g1, g2;
g1.setValues(2, 4, 5);
g1.findGretest();
cout << "greatest element is " << g1.greatest() << endl;

return 0;
}