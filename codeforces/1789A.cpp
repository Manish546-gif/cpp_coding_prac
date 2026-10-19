#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    bool lala = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (gcd(nums[i], nums[j]) <= 2) {
                lala = true;
                break;
            }
        }
        if (lala) break;
    } 
    if (lala) {
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