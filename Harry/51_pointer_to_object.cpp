#include<iostream>
using namespace std;

class Complex {
    int real, imaginary;
    public:
    void set_data(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void get_data(){
        cout<<"Real part:"<<real<<endl;
        cout<<"Imaginary part:"<<imaginary<<endl;
    }
};

int main(){
    cout<<endl;
    cout<<"Simple Object"<<endl;
    Complex o1;
    o1.set_data(5,4);
    o1.get_data();


    cout<<endl;
    cout<<"Calling Class Function with help of Pointer"<<endl;
    Complex *ptr = &o1;
    (*ptr).set_data(4,6);
    (*ptr).get_data();

    cout<<endl;
    cout<<"Calling Class Function with help of Pointer using arrow operator"<<endl;
    ptr->set_data(3,8);
    ptr->get_data();

    cout<<endl;
    cout<<"Pointer using new keyword"<<endl;
    Complex *ptr1 = new Complex;
    ptr->set_data(2,10);
    ptr->get_data();    

    return 0;
}