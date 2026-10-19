#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> ps(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        cin >> ps[i][0] >> ps[i][1];
    }

   int curr = ps[0][1];
   int maxpass = curr;

for (int i = 1; i < n; i++) {
    curr += ps[i][1] - ps[i][0];
    maxpass = max(maxpass, curr);
}

cout << maxpass;


    return 0;
}