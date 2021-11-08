#include<iostream>
using namespace std;

class Base {

    public:
    int var_base;
    void display(){
        cout<<"Displaying Base class var_base "<<var_base<<endl;
    }
};

class Derived :public Base {
    public:
    int var_derived;
    void display(){
        cout<<"Displaying Base class var_base "<<var_base<<endl;
        cout<<"Displaying Derived class var_derived "<<var_derived<<endl;
    }
};


int main(){

    Base *base_class_pointer;
    Base obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 65;
    base_class_pointer->display();
    
    Derived * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 56;
    derived_class_pointer->display();

    return 0;
}