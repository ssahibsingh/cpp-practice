


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;cin>>t;
//     while(t--){

//     int n,x,y;cin>>n>>x>>y;
//     int a = 100006;
//     for(int i = 0; i<=n;i++){
//         for(int j = 0; j <= n; j++){
//             int b = 100*j+4*i;
//             (b>=n)? a=min(a, i*y+j*x):0;
//         }
//     }
//     cout<<a<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,x,y;cin>>n>>x>>y;
            int smoke=0;
        while(n>=100){
            int bus = x;
            int car = 25 *y;
            smoke+=min(bus,car);
            n-=100;
        }
        if(n>0){
            int cars = ceil(n/4.0);
            int bus =x;
            int car = cars*y;
            smoke+=min(bus,car);
        }
        cout<<smoke<<endl;
    }
    return 0;
}