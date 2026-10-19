#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<string> ques;
    while (n > 0) {
        string s;
        cin >> s;
        ques.push_back(s);
        n--;
    }

    for (int k = 0; k < ques.size(); k++) {
        string s = ques[k];
        string best_alice = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                string T = s.substr(0, i) + s.substr(i + 1);

                string best_bob = "";
                bool first_bob = true;


                for (int j = 0; j < T.length(); j++) {
                    if (T[j] == '1') {

                        string cand = T.substr(0, j) + T.substr(j + 1);

                        if (first_bob || cand < best_bob) {
                            best_bob = cand;
                            first_bob = false;
                        }
                    }
                }

                if (best_alice == "" || best_bob > best_alice) {
                    best_alice = best_bob;
                }
            }
        }

        cout << best_alice << "\n";
    }

    return 0;
}