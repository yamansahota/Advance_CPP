#include <iostream>
using namespace std;

class red
{
    int l, b;

public:
    red()
    {
        l = b = 0;
    }
    red(int a)
    {
        l = b = a;
    }
    red(int a, int b1)
    {
        l = a;
        b = b1;
    }
    int area()
    {
        return (l * b);
    }
};
int main()
{
    red r1;
    red r2(5);
    red r3(4, 5);

    cout << r1.area()<<endl;
    cout << r2.area()<<endl;
    cout << r3.area()<<endl;
}