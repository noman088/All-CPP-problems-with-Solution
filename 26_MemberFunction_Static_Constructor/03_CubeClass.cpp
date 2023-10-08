// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor

#include <iostream>
using namespace std;
class cube
{

public:
    int length;

public:
    cube(int v)
    {
        length = v;
    }
    double calculateVolume()
    {
        return length * length * length;
    }
};
int main()
{

    cube c1(5);
    cout << endl;
    cout << "Volume of Cube is " << c1.calculateVolume() << endl;
    cout << endl;

    return 0;
}