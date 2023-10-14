#include <iostream>
using namespace std;
int main()
{
    const int MAX = 11;
    char str[MAX];
    cout << "\nEnter a String : ";
    cin.read(str, MAX);
    int count = cin.gcount();
    str[count] = '\0';
    cout << "String is : " << str;

    return 0;
}