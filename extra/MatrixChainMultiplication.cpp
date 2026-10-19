#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> p = {4, 10, 3, 12,20, 7};

    int n = p.size() - 1;

    vector<vector<int>> m(n + 1, vector<int>(n + 1, 0));

    vector<vector<int>> kMatrix(n + 1, vector<int>(n + 1, 0));


    for (int i = 1; i <= n; i++) {
        m[i][i] = 0;
    }

    for (int len = 2; len <= n; len++) {

        for (int i = 1; i <= n - len + 1; i++) {

            int j = i + len - 1;

            m[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {

                int cost = m[i][k]
                         + m[k + 1][j]
                         + p[i - 1] * p[k] * p[j];

                if (cost < m[i][j]) {

                    m[i][j] = cost;

                    kMatrix[i][j] = k;
                }
            }
        }
    }



    cout << "Cost Matrix (m):\n";

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            if (i > j)
                cout << "X\t";
            else
                cout << m[i][j] << "\t";
        }

        cout << endl;
    }


    cout << "\nK Matrix:\n";

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            if (i >= j)
                cout << "X\t";
            else
                cout << kMatrix[i][j] << "\t";
        }

        cout << endl;
    }


    return 0;
}