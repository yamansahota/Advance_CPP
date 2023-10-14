#include <iostream>
using namespace std;

class student
{
protected:
    int roll_num;

public:
    void get_num(int);
    void put_num(void);
};

void student::get_num(int a)
{
    roll_num = a;
}

void student::put_num()
{
    cout << "Roll No : " << roll_num << "\n";
}

class test : public student
{
protected:
    float sub1;
    float sub2;

public:
    void get_marks(float, float);
    void put_marks(void);
};

void test::get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}

void test::put_marks()
{
    cout << "Marks in Subject 1 : " << sub1 << endl;
    cout << "Marks in Subject 2 : " << sub2 << endl;
}

class result : public test
{
    float total;

public:
    void display(void);
};

void result::display(void)
{
    total = sub1 + sub2;
    put_num();
    put_marks();
    cout << "Total Marks = " << total;
}

int main()
{
    result res;
    res.get_num(7038);
    res.get_marks(75.0, 89.6);
    res.display();
    return 0;
}