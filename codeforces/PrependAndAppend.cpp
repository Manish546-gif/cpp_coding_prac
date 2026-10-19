#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       string s;
       cin>>n;
       cin>>s;
       int left = 0;
       int right = n-1;
       
       
       if(n == 1){
        cout<<n<<endl;
       }
       else{
       while(1){
          if((s.back() == '1' && s.front()=='0') || (s.back() == '0' && s.front() == '1')){
            s.pop_back();
            s.erase(0, 1);
            
          }else{
            break;
          }
       }
       cout<<s.length()<<endl;
    }
    }
    return 0;
}