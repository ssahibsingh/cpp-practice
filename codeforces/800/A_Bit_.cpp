#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    while(n--){
        string s;
        cin>>s;
        if(s[0] == '+'){
            ++ans;
        }
        else if(s[0] == '-'){
            --ans;
        }
        else if(s[1] == '+'){
            ans++;
        }
        else if(s[1] == '-'){
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}