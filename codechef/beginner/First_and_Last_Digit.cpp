#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n;
        int last = n%10;
        while(n>0){
            r = n%10;
            n = n/10;
        }
        cout<<r+last<<endl;
    }
    return 0;
}