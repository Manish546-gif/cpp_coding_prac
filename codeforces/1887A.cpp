#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    bool found = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == k) {
            found = true;
        }
    }
    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}