#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i = 0 ; i<n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        int ans = INT_MAX;
        for(int i = 1; i<n; i++){
            if(arr[i] < arr[i-1]){
                ans = 0;
                break; 
            }
            ans = min(ans, arr[i]-arr[i-1]+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}
