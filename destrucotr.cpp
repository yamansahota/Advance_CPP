#include <iostream>
using namespace std;
int count = 0;

class test
{
public:
    test()
    {
        count++;
        cout << "\nConst Msg: obj name" << count << "created";
    }
    ~test()
    {
        cout << "\n Destructor msg: Obj number" << count << "destroyed";
        count--;
    }
};
int main()
{
    cout << "Inside the main block..";
    cout << "\n Creating first object T1";
    test T1;
    {
        cout << "\n Inside block 1.. ";
        cout << "\n Creating two more objects T2 and T3";
        test T2, T3;
        cout << "\nLeaving Block 1";
    }

    cout << "\nBack inside the main block..";

    return 0;
}