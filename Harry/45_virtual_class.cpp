#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_Number(int number) { roll_number = number; }
    void printNumber()
    {
        cout << "Roll number: " << roll_number << endl;
    }
};

class Test :virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float maths, float physics)
    {
        this->maths = maths;
        this->physics = physics;
    }
    void print_marks()
    {
        cout << "Your Marks in " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports :virtual public Student
{
protected:
    float score;

public:
    void set_score(float score)
    {
        this->score = score;
    }
    void print_score()
    {
        cout << "Your Score is: " << score << endl;
    }
};

class Result : public Sports, public Test
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        printNumber();
        print_marks();
        print_score();
        cout << "Total Score: " << total << endl;
    }
};
int main()
{
    Result o1;
    o1.set_Number(12);
    o1.set_marks(90, 96);
    o1.set_score(90);
    o1.display();
    return 0;
}