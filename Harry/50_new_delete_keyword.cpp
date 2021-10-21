#include<iostream>
using namespace std;


int main(){

    int a = 12;
    int *ptr = &a;

    cout<<"Value of *ptr: "<<*ptr<<endl;

    int *p = new int (3);
    cout<<"Value of *p: "<<*p<<endl;
    delete p;

    int *arr = new int[3];
    arr[0] = 0;
    *(arr+1) = 1;
    arr[2] = 2;
    cout<<"Value of arr[0]: "<<arr[0]<<endl;
    cout<<"Value of arr[1]: "<<arr[1]<<endl;
    cout<<"Value of arr[2]: "<<arr[2]<<endl;

    delete[] arr;
    return 0;
}