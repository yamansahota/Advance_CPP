#include <iostream>
using namespace std;
class B
{
    int a;

public:
    int b;
    void set_ab();
    int get_a(void);
    void show_a(void);
};

class D : public B
{
    int c;

public:
    void mul(void);
    void disp(void);
};

void B::set_ab(void)
{
    a = 5;
    b = 10;
}
int B::get_a()
{
    return a;
}
void B::show_a()
{
    
}
void D::mul()
{
    c = b * get_a();
}
void D::disp()
{
    cout << "a=" << get_a() << "\n";
    cout << "b=" << b << "\n";
    cout << "Multiplication of c=" << c << "\n";
}
int main()
{
    D d;
    d.set_ab();
    d.mul();
    d.show_a();
    d.disp();

    d.b = 20;
    d.mul();
    d.disp();

    return 0;
}