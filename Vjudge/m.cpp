#include <bits/stdc++.h>
using namespace std;
using int64 = long long;     // 64-bit to avoid overflow

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int64> v(n + 1);  // 1-based for convenience
    for (int i = 1; i <= n; ++i) cin >> v[i];

    // Prefix sums for the original array
    vector<int64> prefOrig(n + 1, 0);
    for (int i = 1; i <= n; ++i) prefOrig[i] = prefOrig[i - 1] + v[i];

    // Prepare and prefix-sum the sorted array
    vector<int64> sorted = v;
    sort(sorted.begin() + 1, sorted.end());
    vector<int64> prefSorted(n + 1, 0);
    for (int i = 1; i <= n; ++i) prefSorted[i] = prefSorted[i - 1] + sorted[i];

    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << prefOrig[r] - prefOrig[l - 1] << "\n";
        else
            cout << prefSorted[r] - prefSorted[l - 1] << "\n";
    }
    return 0;
}
