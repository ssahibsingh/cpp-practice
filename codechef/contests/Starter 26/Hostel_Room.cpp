#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int sum = x;
        int sumArr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            sumArr[i] = sum;
        }
        sort(sumArr, sumArr + n);
        if (sumArr[n - 1] < x)
            cout << x << endl;
        else
            cout << sumArr[n - 1] << endl;
    }
    return 0;
}