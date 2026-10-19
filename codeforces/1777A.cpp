#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i = 0; i<n; i++){
            cin>>nums[i];
        }

        if(n==1){
            cout<<0<<endl;
        }
        else{
            long long multi = nums[0];
            int j = 1;
            int count = 0;
            while(j<n){
                if(multi%2 == nums[j]%2){
                    count++;
                    multi = multi*nums[j];
                    j++;
                }else{
                    multi = nums[j];
                    j++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}