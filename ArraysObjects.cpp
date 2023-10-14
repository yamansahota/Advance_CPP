#include <iostream>
using namespace std;
class emp
{
    char name[20];
    float age;
    public:
    void getdata(void);
    void putdata(void);
};
void emp::getdata(void)
{
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Age : ";
    cin>>age;
}
void emp::putdata(void)
{
    cout<<"Name : "<<name<<"\n";
    cout<<"Age : "<<age<<"\n";
}
const int size=3;
int main()

{
    emp manager[size];
    for ( int i = 0; i < size; i++)
    {
        cout<<"\nDetails of Manager :"<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for ( int i = 0; i < size; i++)
    {
        cout<<"\nManager "<<i+1<<"\n";
        manager[i].putdata();
    }
    return 0;
    
}