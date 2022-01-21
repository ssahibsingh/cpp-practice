// #include<bits/stdc++.h>
// using namespace std;

// int countone(string s){
//     int count = 0;
//     for(int i=0; i<s.length(); i++){
//         if(s[i]=='1'){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int t;cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s = bitset<17>(n).to_string();
//         if(n<=2048){
//             int count = countone(s);
//             cout<<count<<endl;
//         }
//         else if(n<=4096){
//             int count = countone(s);
//             cout<<count+1<<endl;
//         }
//         else if(n<=6144){
//             int count = countone(s);
//             cout<<count+2<<endl;
//         }
//         else if(n<=8192){
//             int count = countone(s);
//             cout<<count+3<<endl;
//         }
//         else if(n<=100000){
//             int count = countone(s);
//             cout<<count+4<<endl;
//         }
        

//     }
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int j = n/2048;
        n = n%2048;
        while(n>0){
            j+=n%2;
            n/=2;
        }
        cout<<j<<endl;
    }
    return 0;
}