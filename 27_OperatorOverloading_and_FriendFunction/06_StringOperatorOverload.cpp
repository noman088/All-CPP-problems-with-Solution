
// 6. Create a class CString to represent a string.
// (a). Overload the + operator to concatenate two strings.
// (b). == to compare 2 strings.

#include <iostream>
#include <cstring>
using namespace std;

class cstring
{

private:
    char str[20];

public:
    cstring(){};
    cstring(char *s)
    {
        strcpy(str, s);
    }

    int strlenght(char *p)
    {
        int i;
        for (i = 0; p[i]; i++)
            ;
        return i;
    }
    void display()
    {
        cout << str;
    }
    cstring operator+(cstring c)
    {
        cstring temp = *this;
        strcat(temp.str, c.str);
        return temp;
    }
    bool operator==(cstring s)
    {
        cstring temp = *this;
        int d = strcmp((temp.str), (s.str));
        if (d == 0)
            return 1;
        return 0;
    }
};
int main()
{
    cstring c1("Noman"), c2(" Ahmad"), c3;
    c3 = c1 + c2;
    c3.display();
    cout << endl;

    if (c1 == c2)
        cout << "Equal";
    else
        cout << "Not Eqaul";

    return 0;
}