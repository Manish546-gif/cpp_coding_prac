#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int tfd = (k * l) / nl;   // total toasts from drink
    int tfp = p / np;         // total toasts from salt
    int tfl = c * d;          // total lime slices

    int ans = min({tfd, tfp, tfl}) / n;

    cout << ans;

    return 0;
}