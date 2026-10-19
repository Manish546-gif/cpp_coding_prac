#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int cnt = 0;
        string s;
        cin>>s;
        for(int i = 0; i<n; i++){
            if(s[i] == '.'){
                cnt++;
            }
        }
        bool pos=  false;
        for(int i = 0; i<n-2; i++){
            string result = s.substr(i, 3);
            if(result == "..."){
                pos = true;
                break;
            } 
        }
        if(pos) cout<<"2"<<endl;
        else cout<<cnt<<endl;
     }

    return 0;
}