// Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class
#include <iostream>
using namespace std;
class largestNumber
{
private:
    int first, second, third, largest;

public:
    void setValues(int a, int b, int c)
    {
        first = a;
        second = b;
        third = c;
    }
    int Largest()
    {
        return largest;
    }
    void checkLargest()
    {
        if (first > second && first > third)
            largest = first;
        if (second > first && second > third)
            largest = second;
        if (third > first && third > second)
            largest = third;
    }
};

int main()
{
    largestNumber l1, l2;
    l1.setValues(3, 4, 5);
    l2.setValues(2, 2, 2);
    l1.checkLargest();
    l2.checkLargest();
    cout << "Largest in l1 is " << l1.Largest() << endl;
    cout << "largest in l2 is " << l2.Largest();
    return 0;
}