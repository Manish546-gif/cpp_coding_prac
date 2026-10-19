#include <bits/stdc++.h>
using namespace std;
int main(){
   
    int t;
    cin>>t;
    while(t--){
        int k, n;
        cin>>n>>k;
        vector<int>boxes;
        for(int i = 0 ;  i< n; i++){
            int x;
            cin>>x;
            boxes.push_back(x);
        }
        if(k>1){
            cout<<"YES\n";
        }
        if(k == 1 ){
            bool pos = true;
            for(int i = 1 ; i<n; i++){
                if(boxes[i-1] > boxes[i]){
                    pos = false;
                }
            }
            if(pos){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }

    }
     return 0;
}