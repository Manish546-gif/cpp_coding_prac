#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> station;

        for(int i = 0; i<n; i++){
            int s;
            cin>>s;
            station.push_back(s);
        }
        int ans = 0;
        if(n==1){
            ans += station[0];
            ans = max(ans, 2*(x-station[0]));
        }else{
            ans += station[0];
            for(int i= 1; i<n; i++){
                ans = max(ans, (station[i] - station[i-1]));
            }
            ans = max(ans, 2*(x - station[n-1]));
        }

        cout<<ans<<endl;
     }

    return 0;
}