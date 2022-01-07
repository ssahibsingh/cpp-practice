// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;cin>>t;
//     int p1[t], p2[t], lead[t],winner[t], count =0;
//     for(int i=0; i<t; i++){
//         cin>>p1[i]>>p2[i];
//         if(i!=0){
//             p1[i] = p1[i] + p1[i-1];
//             p2[i] = p2[i] + p2[i-1];
//         }
//         lead[count] = p1[i] - p2[i];
//         if(lead[count]>0)
//             winner[count] = 1;
//         else
//             winner[count] = 2;
//         count++;
//     }
//     auto max_index = find(lead,lead+t,*max_element(lead, lead+t));
//     int index =distance(lead, max_index);
//     cout<<winner[index]<<" "<<lead[index]<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int moduluss(int x){
    if(x<0)
        return -x;
    return x;
}
int main(){
    int rounds;cin>>rounds;
    int p1[rounds], p2[rounds], lead[rounds], moduluslead[rounds];
    int s = 0;
    for(int i = 0; i<rounds;i++){
        cin>>p1[i]>>p2[i];
        s = s +p1[i] - p2[i];
        lead[i] =s;
        moduluslead[i] = moduluss(lead[i]);
    }
    int ans_lead = *max_element(moduluslead, moduluslead+rounds);
    int winner = 2, winner_index;
    for(int i = 0; i<rounds;i++)
        if(ans_lead == moduluslead[i])
            winner_index = i;
    
    if(lead[winner_index]>0)
        winner = 1;
    cout<<winner<<" "<<ans_lead;
    return 0;
}