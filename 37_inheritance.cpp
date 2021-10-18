#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
};


// Derived class
class Programmer : public Employee
{
public:
    string name;
    void setData(int id, float salary, string name)
    {
        this->id = id;
        this->salary = salary;
        this->name = name;
    }
    void printData()
    {
        cout << "ID: " << id << endl
             << "Salary: " << salary << endl
             << "Name: " << name;
    }
};

int main()
{
    Employee o1;
    Programmer o2;
    o2.setData(1, 1234567, "Sahib");
    o2.printData();

    return 0;
}