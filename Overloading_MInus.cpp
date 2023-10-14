#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    void getdata(int a, int b, int c);
    void display(void);
    void operator-();
};
void space::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void space::display(void)
{
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
    cout << "Z : " << z << endl;
}
void space::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    space s;
    s.getdata(10, 30, -20);
    cout << "Without Overloading :" << endl;
    s.display();

    -s;
    cout << "With Overloading : " << endl;
    s.display();
    return 0;
}