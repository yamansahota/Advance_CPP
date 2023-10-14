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
        cout << "Roll No : " << roll_number << "\n";
    }
};

class test : public student
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
        cout << "Part 1 : " << part1 << "\n";
        cout << "Part 2 : " << part2 << "\n";
    }
};

class sports
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
        cout << "Sports wt : " << score << "\n\n";
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

    cout << "Total score : " << total << "\n";
}

int main()
{
    result std;
    std.get_number(1234);
    std.get_marks(27.5, 52.4);
    std.get_score(6.0);
    std.display();
    return 0;
}