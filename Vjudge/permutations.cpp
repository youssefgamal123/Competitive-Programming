#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        string op;
        int x;
        cin >> op >> x;

        if (op == "next_permutation") {
            for (int i = 0; i < x; i++) {
                if (!next_permutation(s.begin(), s.end())) {
                    // wrap around to smallest permutation
                    sort(s.begin(), s.end());
                }
            }
        } else { // prev_permutation
            for (int i = 0; i < x; i++) {
                if (!prev_permutation(s.begin(), s.end())) {
                    // wrap around to largest permutation
                    sort(s.begin(), s.end(), greater<char>());
                }
            }
        }

        cout << s << "\n";
    }
    return 0;
}
