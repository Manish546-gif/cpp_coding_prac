#include <bits/stdc++.h>
using namespace std;

void tower(int n, char S, char H, char D) {
    if (n == 1) {
        cout << "Move one plate from " << S << " to " << D << endl;
        return;
    }

    tower(n - 1, S, D, H);

    cout << "Move " << n << " plate from " << S << " to " << D << endl;

    tower(n - 1, H, S, D);
}

int main() {
    int n = 3;

    char S = 'S';
    char H = 'H';
    char D = 'D';

    tower(n, S, H, D);

    return 0;
}
