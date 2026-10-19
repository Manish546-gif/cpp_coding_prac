#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     vector<int> score(n);
     for(int i = 0; i< n; i++){
        int x;
        cin>>x;
        score[i] = x;
     }

     int mins = score[0];
     int maxs = score[0];
     int per = 0;
     for(int i = 1; i<n ; i++){
        if(score[i] < score[i-1] && score[i] < mins){
            per++;
            mins = min(mins,score[i]);
        }
        if(score[i] > score[i-1] && score[i] > maxs){
            per++;
            maxs = max(maxs, score[i]);
        }
     }

     cout<<per;
     return 0;
}