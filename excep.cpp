#include <iostream>
#include<fstream>
#include <string>
using namespaced std;

int main()
{
    ofstream fout;
    string line ;
    fout.open("hello.txt");
    while (fout)
    {
        getline(cin,line);
        fout<<line<<endl;
    }
    fout.close();
    ifstream fin;
    fin.open();
    while(fin)
    {
        getline(fin,line);
        cout<<line<<endl;
    }
    fin.close();
    return 0
}