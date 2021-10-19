#include<iostream>
using namespace std;

class Base1{
    public:
    int base1;
    void setBase1(int base1){
        this->base1 = base1;
    }
};
class Base2{
    public:
    int base2;
    void setBase2(int base2){
        this->base2 = base2;
    }
};
class Derived :public Base1, public Base2 {
    public:
    void display(){
    cout<<"The value of Base1: "<<base1<<endl;
    cout<<"The value of Base2: "<<base2<<endl;
    }
};

int main(){
    Derived o1;
    o1.setBase1(1);
    o1.setBase2(2);
    o1.display();
    return 0;
}