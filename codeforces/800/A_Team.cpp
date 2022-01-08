#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    int count = 0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)>=2)
            count++;
    }
    cout<<count;
    return 0;
}