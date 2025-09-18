#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> ans(n+2, 0);
    vector<bool> seen(100001, false);

    for (int i = n; i >= 1; --i) {
        if (!seen[a[i]]) {
            seen[a[i]] = true;
            ans[i] = ans[i+1] + 1;
        } else {
            ans[i] = ans[i+1];
        }
    }

    while (m--) {
        int l;
        cin >> l;
        cout << ans[l] << "\n";
    }
    return 0;
}
