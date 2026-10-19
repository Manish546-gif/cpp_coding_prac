#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    if (freq.size() == 1) {
        cout << "YES\n";
    } else if (freq.size() == 2) {
        auto it = freq.begin();
        int count1 = it->second;
        it++;
        int count2 = it->second;

        if (abs(count1 - count2) <= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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