#include <iostream>
#include <conio.h>
using namespace std;

class test
{
    int *a;

public:
    test(int size)
    {
        a = new int(size);
        cout << "\n\nDestructor Msg: Integer array of size" << size << "created..";
    }
    ~test()
    {
        delete a;
        cout << "\n\nDestructor Msg:Freed up the memory allocated for integer array";
    }
};
int main()
{
    int s;
    cout << "Enter the size of the array..";
    cin >> s;
    cout << "\n\nCreating an object of test class..";
    test T(s);
    cout << "\n\nPress any key to end the program..";
    getch();
    return 0;
}