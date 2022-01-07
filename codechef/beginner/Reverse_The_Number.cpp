#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string m, m2;
        cin>>m;
        for(int i=m.length()-1;i>=0;i--){
            m2+=m[i];
        }
        cout<<stoi(m2)<<endl;
    }
    return 0;
}