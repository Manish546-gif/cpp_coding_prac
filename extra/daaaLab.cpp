#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, capacity;

    cout << "Enter number of items: ";
    cin >> n;

    vector<int> weight(n), value(n);

    cout << "Enter weights of the items:\n";
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }


    cout << "Enter values of the items:\n";
    for (int i = 0; i < n; i++) {
        cin >> value[i];
    }


    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));


    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= capacity; j++) {

       
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }
            else if (weight[i - 1] <= j) {
                dp[i][j] = max(value[i - 1] + dp[i - 1][j - weight[i - 1]],
                               dp[i - 1][j]);
            }

      
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }


    cout << "\nDP Matrix:\n";
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= capacity; j++) {
            cout << dp[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMaximum Profit = " << dp[n][capacity] << endl;

    return 0;
}