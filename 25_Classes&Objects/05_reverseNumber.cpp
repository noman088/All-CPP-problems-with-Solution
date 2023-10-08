#include <iostream>
using namespace std;
class revers
{
private:
    int ActualNumber;
    int ReverseNumber;

public:
    void setActualNum(int x)
    {
        ActualNumber = x;
    }

    int GetActual()
    {
        return ActualNumber;
    }
    int GetReverse()
    {
        return ReverseNumber;
    }
    void CalculateReversNumber()
    {
        int rem, num = 0;
        int a = ActualNumber;
        while (a)
        {
            rem = a % 10;
            num = (num * 10) + rem;
            a = a / 10;
        }
        ReverseNumber = num;
    }
};
int main()
{
    revers r1;
    r1.setActualNum(2345);
    r1.CalculateReversNumber();
    cout << "Reverse of " << r1.GetActual() << " is " << r1.GetReverse();

    return 0;
}