#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>st;
    int i = 0;
    while(i < 4){
        int x; 
        cin>>x;
        st.insert(x);
        i++;
    }

    cout<<(4-st.size());
    return 0;
}