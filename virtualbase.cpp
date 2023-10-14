#include <iostream>
using namespace std;

class instrument
{
public:
    virtual void makesound()
    {
        cout << "Instrument Playing...";
    }
};
class Guitar : public instrument
{
public:
    void makesound()
    {
        cout << "Guitar Playing...";
    }
};
int main()
{
    instrument *i1 = new Guitar;
    i1->makesound();
    return 0;
}