#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> str;
    for(int i = 0; i<s.length(); i+=2){
        str.push_back(s[i]);
    }
    int j = 0;
    sort(str.begin(), str.end());
    for(int i = 0; i<str.size(); i++){
        s[j] = str[i];
        j+=2;
    }
    cout<<s;
    return 0;
}