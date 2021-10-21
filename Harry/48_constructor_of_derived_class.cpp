#include <iostream>
using namespace std;

class Base
{
    int data1;
public:
Base(){}
    Base(int x)
    {
        data1 = x;
        cout << "This is Base constructor" << endl;
    }
    void printData1(){
        cout<<data1<<endl;
    }
};

class Derived : public Base
{
    int data2;
public:
Derived(){}
    Derived(int x, int y):Base(x)
    {
        data2 = y;
        cout << "This is Derived constructor" << endl;
    }
    void printData2(){
        cout<<data2<<endl;
    }
};

int main()
{
    Derived der(4,8);
    der.printData1();
    der.printData2();

    return 0;
}