#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    if(toupper(s[0]) == s[0]){
        cout<<s;
    }
    else{
        cout<<char(toupper(s[0]));
        for(int i =1;i<s.length();i++){
            cout<<s[i];
        }
    }
    return 0;
}