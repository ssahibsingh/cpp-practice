#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < 2*n; i++)
            cin >> arr[i];

        sort(arr, arr + 2 * n);

        int a[n+1];
        for(int i = 0; i < n+1; i++){
            a[i] = 0;
        }
        for(int i = 0; i < 2*n;i++){
            a[arr[i]]++;
        }
        int flag = 1;
        for(int i = 0; i < n+1; i++){
            if(a[i]!=0&&a[i]==1){
                flag = 0;
                break;
            }
            if(a[i] == 0)
                break;
        }
        if(flag == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}