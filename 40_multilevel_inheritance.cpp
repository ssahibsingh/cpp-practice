#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    void setRollNumber(int value) { rollNumber = value; }
    void getRollNumber()
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Exam : public Student
{
protected:
    int maths, physics;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void getMarks()
    {
        cout << "Maths marks: " << maths << endl;
        cout << "Physics marks: " << physics << endl;
    }
};

class Results : public Exam
{
    float percentage;

public:
    void display_results()
    {
        getRollNumber();
        getMarks();
        cout << "Percentage: " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    Results o1;
    o1.setRollNumber(2);
    o1.set_marks(90, 60);
    o1.display_results();
    return 0;
}