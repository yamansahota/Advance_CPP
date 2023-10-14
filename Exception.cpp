#include <iostream>
using namespace std;
int main()
{
    int num, den, result;
    cout << "Enter Two Numbers : \n";
    cin >> num >> den;

    try
    {
        if (den == 0)

            throw den;

        result = num / den;
    }
    catch (int ex)
    {
        cout << "Exception can't divided by Zero " << ex<<endl;
    }
    cout << "Your Answer is " << result;

    return 0;
}