#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number(void)
    {
        cout << "Roll No : " << roll_number << endl;
    }
};
class test : virtual public student
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks(void)
    {
        cout << "Marks Obtained : " << endl;
        cout << "Part 1 = " << part1 << endl;
        cout << "Part 2 = " << part2 << endl;
    }
};
class sports : public virtual student
{
protected:
    float score;

public:
    void get_score(int s)
    {
        score = s;
    }
    void put_score(void)
    {
        cout << "Sports : " << score << endl;
    }
};
class result : public test, public sports
{
    float total;

public:
    void display(void);
};
void result::display(void)
{
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();

    cout << "Total score = " << total << endl;
}
int main()
{
    result std;
    std.get_number(678);
    std.get_marks(30.5, 25.5);
    std.get_score(7.0);
    std.display();

    return 0;
}