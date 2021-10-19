#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumReal(Complex , Complex );
    
};
class Complex
{
    int a, b;
    // friend int Calculator ::sumReal(Complex o1, Complex o2);
    friend class Calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator :: sumReal(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    Calculator a1;
    a1.sumReal(c1,c2);
    
    return 0;
}