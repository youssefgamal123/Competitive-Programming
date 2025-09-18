#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;

    const int MAXT = 200000;
    vector<int> diff(MAXT + 2, 0);      // +2 to safely access r+1

    // Step 1: difference array updates
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }

    // Step 2: prefix sum to get recipe counts per temperature
    vector<int> count(MAXT + 1, 0);
    for (int t = 1; t <= MAXT; t++) {
        count[t] = count[t - 1] + diff[t];
    }

    // Step 3: mark admissible temperatures
    vector<int> good(MAXT + 1, 0);
    for (int t = 1; t <= MAXT; t++) {
        good[t] = (count[t] >= k) ? 1 : 0;
    }

    // Step 4: prefix sum of admissible counts
    vector<int> pref(MAXT + 1, 0);
    for (int t = 1; t <= MAXT; t++) {
        pref[t] = pref[t - 1] + good[t];
    }

    // Step 5: answer queries
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << "\n";
    }
    return 0;
}
