#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    int i = 2;
    while(i<n){
        if(n%i == 0){
            return false;
        }
        i++;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int i = 0;
        if(isprime(n+1)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}