#include <bits/stdc++.h>
using namespace std;

int main() {

    string a = "abcde";
    string b = "ace";

    int n = a.size();
    int m = b.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;

            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }


    for (auto row : dp) {
        for (auto x : row)
            cout << x << " ";

        cout << endl;
    }

    int i = n;
    int j = m;

    string ans;

    while (i > 0 && j > 0) {

        if (a[i - 1] == b[j - 1]) {
            ans += a[i - 1];

            i--;
            j--;
        }
        else if (dp[i - 1][j] >= dp[i][j - 1]) {
            i--;
        }
        else {
            j--;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << "LCS: " << ans << endl;

    return 0;
}