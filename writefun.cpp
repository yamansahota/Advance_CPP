#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[] = "streams";
    int lenl = strlen(str);
    for (int i = 1; i <= lenl; i++)
    {
        cout.write(str, i);
        cout << "\n";
    }
    for (int i = lenl - 1; i > 0; i--)
    {
        cout.write(str, i);
        cout << "\n";
    }
    return 0;
}