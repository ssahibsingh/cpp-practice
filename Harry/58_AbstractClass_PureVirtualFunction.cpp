#include <iostream>
using namespace std;

class Base
{ // Abstract class because it will be used only for inheritance
protected:
    int a, b;

public:
    Base(){}
    Base(int a, int b)
    {
        a = 12;
        b = 12;
    }
    virtual void display()=0; //do nothing Function
};

class Derived : public Base
{
public:
    Derived(){}
    Derived(int a, int b){}
    void display()
    {
        cout<<"This Is derived class."<<endl;
    }
};
int main()
{
    // Base *base_class_pointer;
    // Derived obj_derived;
    // base_class_pointer = &obj_derived;

    // obj_derived.display();
    // base_class_pointer->display();

    Base *base_class_pointer;
    Derived o(12, 11);
    base_class_pointer = &o;

    base_class_pointer->display();
    return 0;
}