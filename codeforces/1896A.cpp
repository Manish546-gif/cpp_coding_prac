#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums;
        for(int i = 0; i<n; i++){
            int s;
            cin>>s;
            nums.push_back(s);
        }
        int large = *max_element(nums.begin(), nums.end());
        if(nums[0] != 1 || large > n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}