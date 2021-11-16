#include<iostream>
#include<fstream>
using namespace std;



int main(){
    string st1 = "Hello, world!", st2;

    // Opening a file and writing to it
    ofstream out("60_sample.txt");
    out<<st1;
    //Opening a file and reading it
    ifstream in("60_sampleb.txt");
    getline(in,st2); // getting a line from the file

    out<<endl<<st2; //writing st2 to 60_sample.txt
    return 0;
}