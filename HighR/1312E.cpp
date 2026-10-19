#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n;i++){
        cin>> nums[i];
    }
    stack<int>final;
    if(n == 1){
        cout<<1<<endl;
    }
    else{
        for(int i = 0; i<n; i++){
            if(final.empty()){
                final.push(nums[i]);
            }
            else if(final.top() != nums[i]){
                final.push(nums[i]);
            }else{
                final.top()++;
                int s = final.top();
                final.pop();
                while(!final.empty() && s == final.top()){
                    final.top()++;
                    s = final.top();
                    final.pop();
                }
                final.push(s);
            }
        }
        cout<<final.size()<<endl;
    }
}
int main(){

    solve();
    return 0;
}