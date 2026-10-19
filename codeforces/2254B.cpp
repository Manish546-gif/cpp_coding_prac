#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int fs = 0;
        for(int  i =0; i<s.length()-1; i++){
            if(s[i] != s[i+1]){
                fs++;
            }
        }

        int maximumRed = 0;
        for(int i = 1; i<s.length()-1; i++){
            int currred = 0;
            if(s[i] != s[i-1]) currred++;
            if(s[i] != s[i+1]) currred++;

            if(s[i-1] != s[i+1]) currred--;

            maximumRed = max(currred, maximumRed);
        }
        int ans = fs-maximumRed;
        ans++;
        cout<<ans<<endl;
    }
    return 0;
}