#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s, s2;
        cin>>s;
        s2 = s;
        reverse(s.begin(), s.end());
        
        if(s2 == s){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }
    }
    return 0;
}