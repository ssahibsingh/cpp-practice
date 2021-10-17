#include<iostream>
using namespace std;

int count=0;
class num {
    public:
    num(){
        cout<<"this is constructor and value of count is "<<count<< endl;
        count++;
    }
    ~num(){
        cout<<"this is destructor and value of count is "<<count<< endl;
        count--;
    }
};

int main(){
    cout<<"this is main function"<< endl;

    num o1;
    {
        cout<<"this is n1 and value of count is "<<count<< endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Outside the block"<<endl;
    return 0;
}