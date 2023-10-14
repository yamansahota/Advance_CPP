#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("Country : ");

    fout << "USA";
    fout << "USA";
    fout << "USA";

    fout.close();

    fout.open("Capital");

    fout << "Washington \n";
    fout << "Washington \n";
    fout << "Washington \n";
    fout.close();

    const int N = 80;
    char line[N];
    ifstream fin;
    fin.open("Country");

    cout << "Contents of country file \n";

    while (fin)
    {
        fin.getline(line, N);
        cout << line;
    }
    fin.close();
    fin.open("Capital");
    cout << "\n Contents of capital file\n";

    while (fin)
    {
        fin.getline(line, N);
        cout << line;
    }
    fin.close();
    return 0;
}