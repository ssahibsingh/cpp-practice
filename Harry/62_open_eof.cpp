#include<iostream>
#include <fstream>
#include <string>
using namespace std;



int main(){
    ofstream out;
    out.open("62_sample.txt");
    out<<"Line 1"<<endl;
    out<<"Line 2"<<endl;
    out<<"Line 3"<<endl;
    out<<"Line 4"<<endl;
    out<<"Line 5"<<endl;

    out.close();

    ifstream in;
    in.open("62_sample.txt");

    string st1;
    // in>>st1; // only one word is stored in st1
    // cout<<st1<<endl;

    // for all words we have to use getline function

    while (in.eof()==0){
        getline(in, st1);
        cout<<st1<<endl;
    }
    return 0;
}