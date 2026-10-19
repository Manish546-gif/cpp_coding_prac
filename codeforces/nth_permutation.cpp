#include <bits/stdc++.h>
using namespace std;

string kthPermutation(string s, long long k) {
    int n = s.size();

    vector<long long> fact(n + 1, 1);
    for (int i = 1; i <= n; i++)
        fact[i] = fact[i - 1] * i;

    int freq[26] = {0};
    for (char c : s)
        freq[c - 'a']++;

    string ans;

    while (n--) {
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) continue;

            freq[i]--;

            long long cnt = fact[n];
            for (int j = 0; j < 26; j++)
                cnt /= fact[freq[j]];

            if (k > cnt) {
                k -= cnt;
                freq[i]++;
            } else {
                ans += char('a' + i);
                break;
            }
        }
    }

    return ans;
}

int main() {
    string s = "aabc";
    long long k = 4;

    cout << kthPermutation(s, k) << endl;

    return 0;
}