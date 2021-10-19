#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber(){
        cout<<"Your Number is "<<a<<" + i"<<b<<endl;
    }
};

int main()
{
    Complex o1(4,6);
    o1.printNumber();
     Complex o2(6);
    o2.printNumber();
    return 0;
}