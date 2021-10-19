#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata()
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};

class Derived : public Base
{
    int data3;

public:
    void process()
    {
        data3 = data2 * getdata1();
    }
    void display()
    {
        cout << "Value of data 1 : " << getdata1() << endl;
        cout << "Value of data 2 : " << data2 << endl;
        cout << "Value of data 3 : " << data3 << endl;
    }
};

int main()
{
    Derived o1;
    o1.setdata();
    o1.process();
    o1.display();
    return 0;
}