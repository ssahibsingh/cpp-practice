#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{ 
    int a, b;

public:
    void sim_set_value(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void Simple_Cal_Display()
    {
        cout << "Addition: " << (a + b) << endl;
        cout << "Subtraction: " << (a - b) << endl;
        cout << "Multiplication: " << (a * b) << endl;
        cout << "Division: " << (a / b) << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void sci_set_value(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void Sci_Cal_Display()
    {
        cout << "sin(a)+cos(b): " << sin(a) + cos(b) << endl;
        cout << "sin(b)+cos(a): " << sin(b) + cos(a) << endl;
        cout << "sin(a) + tan(b): " << sin(a) + tan(b) << endl;
        cout << "cos(a) + tan(b): " << cos(a) + tan(b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{  
    public:
    HybridCalculator(){}
    HybridCalculator(int a, int b){
        sci_set_value(a,b);
        sim_set_value(a,b);
        Simple_Cal_Display();
        Sci_Cal_Display(); }
};

int main()
{
    HybridCalculator o1(10,10);
    return 0;
}



// Answer 1 : multiple
// Answer 2 : public