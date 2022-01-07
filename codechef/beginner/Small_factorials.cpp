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
        int size = 1000, arr[size], carry = 0, j = size - 1;
        arr[size - 1] = 1;
        while (n > 1)
        {
            int x;
            for (int k = size - 1; k >= j; k--)
            {
                x = arr[k] * n + carry;
                arr[k] = x % 10;
                carry = x / 10;
            }
            while(carry>0){
                arr[--j] = carry%10;
                carry/=10;
            }
            n--;
        }
        for(int k = j; k <size-1; k++){
            cout<<arr[k];
        }
        cout<<endl;
    }
    return 0;
}

// arr  = 0,0,0,0,0,..........0,0,0,1
