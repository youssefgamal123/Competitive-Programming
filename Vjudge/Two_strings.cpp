#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        vector<int> ids(n);
        for (int i = 0; i < n; i++) cin >> ids[i];

        map<int, vector<char>> mpS, mpT;

        for (int i = 0; i < n; i++) {
            mpS[ids[i]].push_back(s[i]);
            mpT[ids[i]].push_back(t[i]);
        }

        bool ok = true;
        for (auto &p : mpS) {
            int id = p.first;
            auto v1 = p.second;
            auto v2 = mpT[id];

            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());

            if (v1 != v2) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
