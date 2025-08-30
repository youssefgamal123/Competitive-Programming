#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> S(8);
    for (int i = 0; i < 8; i++) cin >> S[i];

    bool ok = true;


    for (int i = 1; i < 8; i++) {
        if (S[i] < S[i-1]) {
            ok = false;
            break;
        }
    }


    for (int i = 0; i < 8 && ok; i++) {
        if (S[i] < 100 || S[i] > 675 || S[i] % 25 != 0) {
            ok = false;
        }
    }

    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}
