#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 34, 67, 88, 99, 45, 76, 89, 22, 55};
    int i, num, *ptr;
    ptr = arr;
    cout << "Enter the elements to be declared : ";
    cin >> num;
    for (i = 0; i < 10; i++)
    {
        if (*ptr == num)
        {
            cout << "\n"
                 << num << " is present in the array .";
            break;
        }
        else if (i == 9)
        {
            cout << "\n"
                 << num << " is not present in array .";
            ptr++;
        }
    }
    return 0;
}