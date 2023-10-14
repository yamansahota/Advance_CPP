#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "..........................................................................\n";
    cout << setw(5) << "Num" << setw(5) << "SQR (Hex Form)" << setw(12) << "SQRT";
    cout << setw(15) << "SQR SCI";
    cout << "\n...........................................................................\n";
    cout.setf(ios::showpoint);
    for (int j = 1; j <= n; j++)
    {
        cout << setw(5) << j << setw(8) << setiosflags(ios::hex) << setw(8) << j * j << setw(20) << setprecision(2) << sqrt((double)j) << setw(15) << setprecision(3) << setiosflags(ios::scientific) << sqrt((double)j);

        cout << resetiosflags(ios::hex);
        cout << resetiosflags(ios::scientific) << "\n";
    }
    return 0;
}