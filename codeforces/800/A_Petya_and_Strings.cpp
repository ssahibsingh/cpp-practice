#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int temp;
    for(int i=0;i<s1.length();i++){
        temp =tolower(s1[i]) - tolower(s2[i]);
        if(temp!=0)
            break;
    }
    if(temp>0)
        cout<<"1";
    else if(temp<0)
        cout<<"-1";
    else
        cout<<"0";
    return 0;
}