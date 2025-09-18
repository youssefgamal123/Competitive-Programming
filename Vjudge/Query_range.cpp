#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<long long> diff(n + 1, 0);

    while (q--) {
        int L, R;
        long long val;
        cin >> L >> R >> val;
        L--; R--;                 // 0-based
        diff[L] += val;
        if (R + 1 < n) diff[R + 1] -= val;
    }

    long long add = 0;
    for (int i = 0; i < n; i++) {
        add += diff[i];   // running sum
        a[i] += add;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
