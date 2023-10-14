#include <iostream>
using namespace std;

class instrument
{
public:
    virtual void makesound() = 0;
};
class Guitar : public instrument
{
public:
    void makesound()
    {
        cout << "Guitar Instrument is Playing...\n";
    }
};
class Tabla : public instrument
{
    void makesound()
    {
        cout << "Tabla Instrument us playing...";
    }
};
int main()
{
    instrument *i1 = new Guitar;
    i1->makesound();
    instrument *i2 = new Tabla;
    i2->makesound();
    return 0;
}