#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int best = 1;
    for (int i = 0; i < n; ++i) {
        int l = i, r = i;
        // expand left
        while (l - 1 >= 0 && a[l-1] <= a[l]) --l;
        // expand right
        while (r + 1 < n && a[r+1] <= a[r]) ++r;
        best = max(best, r - l + 1);
    }

    cout << best << '\n';
    return 0;
}
