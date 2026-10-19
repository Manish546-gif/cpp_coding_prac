#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int ans = 0;
        while(a != b && b!=c && c!=a){
          int mini = min({a, b, c});
            int maxi = max({a, b, c});
           if(a == mini){
            a++;
           }
           else if(b == mini){
            b++;
           }
           else if(c==mini){
            c++;
           }
           if(a == maxi){
            a--;
           }
           else if( b == maxi){
            b--;
           }
           else{
            c--;
           }
           ans++;

        }
        cout<<ans<<endl;
    }
    return 0;
}