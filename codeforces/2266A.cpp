#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int max_strong = min({a1, a2, a3});
    cout << n - max_strong << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}