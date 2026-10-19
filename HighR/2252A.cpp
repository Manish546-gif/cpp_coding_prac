#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> moves(n);
        map<int, int> freq;
        int total_health = 0;
        
        for(int i = 0; i < n; i++){
            cin >> moves[i];
            freq[moves[i]]++;
            total_health += moves[i];
        }
        
        int max_freq = 0;
        int repi = 0;
        for(auto p : freq){
            if(p.second > max_freq){
                max_freq = p.second;
                repi = p.first;
            }
        }
        
        int health = 0;
        bool rep = false;
        int non_rep_cards = n - max_freq;
        
        int max_repi_cards = min(max_freq, non_rep_cards + 2);
        
        if(max_freq <= (n + 1) / 2){
            health = total_health;
        } else {
            health = (total_health - (max_freq * repi)) + (max_repi_cards * repi);
        }
        
        cout << health << endl;
    }
    return 0;
}