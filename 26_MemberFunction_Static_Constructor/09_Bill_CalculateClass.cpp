// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.

#include <iostream>
using namespace std;
class Bill
{
private:
    int cust_ID;
    string cust_name;
    double bill;

public:
    void get(int ID, string name, double unit)
    {
        cust_ID = ID;
        cust_name = name;
        bill = unit;
    }

    void calculateBill()
    {
        double eb;
        if (bill <= 100)
        {
            eb = bill * 1.5;
            cout << "Your Total bill is " << eb << endl;
        }
        if (bill > 100 && bill <= 200)
        {
            eb = bill * 2;
            cout << "Your Total bill is " << eb << endl;
        }
        if (bill > 200)
        {
            eb = bill * 3;
            cout << "Your Total bill is " << eb << endl;
        }
    }
};
int main()
{
    Bill b1, b2, b3;
    b1.get(1234, "Noman", 100);
    b2.get(3455, "Kamran", 200);
    b3.get(5678, "Aman", 300);
    b1.calculateBill();
    b2.calculateBill();
    b3.calculateBill();

    return 0;
}