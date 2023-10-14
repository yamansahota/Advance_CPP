#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Create a file and write to the file

    ofstream myfile("hello.txt");
    myfile << "Yaman Sahota is Here Bro!!!";
    myfile.close();

    // Reading from the file

    string read;
    ifstream myread("hello.txt");
    while (getline(myread, read))
    {
        cout << read;
    }
    return 0;
}