// 8. Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.

#include <iostream>
using namespace std;
class Bank
{

public:
    int principle;
    double roi;
    int year;

public:
    Bank(int pri, int returnOnI, int saal)
    {
        principle = pri;
        roi = returnOnI;
        year = saal;
    }
    void principal(int p)
    {
        principle = p;
    }
    void ROI(double ROI)
    {
        this->roi = ROI;
    }
    void Year(int y)
    {
        year = y;
    }
    void calculateSI()
    {
        int s;
        s = (principle * roi * year) / 100;
        cout << s;
    }
};
int main()
{

    Bank emp1(1000, 5, 5);
    emp1.calculateSI();
    return 0;
}