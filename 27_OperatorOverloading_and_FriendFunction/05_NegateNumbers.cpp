// 5. Consider following class Numbers
// class Numbers
// {
// int x,y,z;
// public:
// // methods
// };
// Overload the operator unary minus (-) to negate the numbers.

#include<iostream>
using namespace std;
class Number{
    int x, y, z;
    public:
        Number(){};
        Number (int a,int b, int c){
            x = -a;
            y = -b;
            z = -c;
        }
        void Display(){
            cout << "Numbers are: \n " << x <<", "<< y <<" and "<< z;
        }
};

int main()
{
        Number n1(1, 2, 3);
        n1.Display();

        return 0;
}