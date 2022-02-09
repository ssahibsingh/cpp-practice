#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int banana, apple;
        cin>>banana>>apple;

        int ans = 0;
        if(banana>0 && apple >0){
            if((banana/2)>=apple)
                ans = apple;
            else
                ans = banana/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}