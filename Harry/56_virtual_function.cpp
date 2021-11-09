#include<iostream>
using namespace std;

class Base {
    public:
    int var_Base;

    virtual void display(){
        cout<<"Displaying Base class var_base "<<var_Base<<endl;
    }
};

class Derived : public Base{
    public:
    int var_Derived = 6;

    void display(){
        cout<<"Displaying Base class var_base "<<var_Base<<endl;
        cout<<"Displaying Derived class var_Derived "<<var_Derived<<endl;
    }
};

int main(){
    Base * base_class_pointer;
    Derived obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_Base = 3;
    base_class_pointer->display();
    return 0;
}