#include<iostream>
using namespace std;


int main(){
    int x,y;
    cin>>x>>y;

    int * arr[x];
    for(int i = 0; i < x; i++){
        int n;
        cin>>n;
        arr[i] = new int[n];
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    while(y--){
        int a,b;
        cin>>a>>b;

        cout<<arr[a][b]<<endl;
    }
    return 0;
}