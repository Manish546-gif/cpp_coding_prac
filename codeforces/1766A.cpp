#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = (n / 1000)
                + ((n / 100) % 10)
                + ((n / 10) % 10)
                + (n % 10);

        cout << ans << endl;
    }

    return 0;
}