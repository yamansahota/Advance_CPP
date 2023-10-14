#include <iostream>
using namespace std;
class text
{
    int code;
    static int count;

public:
    void setcode(void)
    {
        code = ++count;
    }
    void showcode(void)
    {
        cout << "Object Number : " << code << "\n";
    }
    static void showcount(void)
    {
        cout << "count : " << count << "\n";
    }
};
int text :: count;
int main()
{
    text t1, t2;

    t1.setcode();
    t2.setcode();

    text::showcount();

    text t3;
    t3.setcode();

    text::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}