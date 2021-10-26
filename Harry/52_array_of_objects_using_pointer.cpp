#include<iostream>
using namespace std;

class Shop {
    int id;
    float price;
    public:
    void set_data(int id, float price){
        this->id = id;
        this->price = price;
    }

    void get_data(){
        cout<<"ID: "<<id<<endl;
        cout<<"Price: "<<price<<endl; 
    }
};

int main(){
    int size = 4;
    Shop *ptr = new Shop [size];
    Shop *ptrtemp = ptr;
    int p,q;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id: ";
        cin>> p;
        cout<<"Enter Price: ";
        cin>>q;

        ptr->set_data(p,q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        ptrtemp->get_data();
        ptrtemp++;
    }
    return 0;
}