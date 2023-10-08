
// 6. Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.

#include <iostream>
#include <cstring>
using namespace std;
class Student
{

private:
    int roll_number;
    string name;

public:
    Student(int rn, string n)
    {
        roll_number = rn;
        name = n;
    }
    void display()
    {
        cout << "Name = " << name << ", Roll Number = " << roll_number << endl;
    }
};
int main()
{

    Student s1(1, "Noman Ahmad");
    Student s2(2, "Kamran Ahmad");
    cout << endl;
    s1.display();
    s2.display();
    cout << endl;
    return 0;
}