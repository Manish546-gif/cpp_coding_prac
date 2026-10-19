// a perfect permutation is where no element from 1 to n is places on its right index

#include <bits/stdc++.h>

using namespace std;
int main(){
    
    int k, l, m,n;
    cin>>k>>l>>m>>n;
    int d;
    int cnt = 0;
    cin>>d;
    for(int i = 1; i<=d; i++){
        if(i%l==0 || i%m==0 || i%n==0 || i%k==0){
            cnt++;
        }
    }

   cout<<cnt;
    return 0;

}