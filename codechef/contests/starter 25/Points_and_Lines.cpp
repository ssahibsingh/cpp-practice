#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[],int n)
{
    unordered_set<int> s;
    for (int i=0; i<n; i++)
        if (s.find(arr[i])==s.end())
            s.insert(arr[i]);

    return s.size();    
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x[n], y[n];
        for(int i=0; i<n; i++){
            cin>>x[i]>>y[i];
        }

        int ans = countDistinct(x,n) + countDistinct(y,n);
        cout<<ans<<endl;
    }
    return 0;
}