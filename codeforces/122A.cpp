#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n % 4 == 0 || n % 7 == 0){
        cout<<"YES";
        return 0;
    }
    int len = log10(n)+1;


    while(len>0){
        int rem = n % 10;
        if(rem != 4 && rem != 7){
            cout<<"NO";
            return 0;
        }
        len--;
        n/=10;
    }
    cout<<"YES";
    return 0;
}