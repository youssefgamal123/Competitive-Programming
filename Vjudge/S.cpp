#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    struct Op { int l, r; long long d; };
    vector<Op> ops(m + 1);
    for (int i = 1; i <= m; i++)
        cin >> ops[i].l >> ops[i].r >> ops[i].d;

    vector<long long> opCount(m + 2, 0);
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        opCount[x] += 1;
        if (y + 1 <= m) opCount[y + 1] -= 1;
    }
    for (int i = 1; i <= m; i++)
        opCount[i] += opCount[i - 1];

    vector<long long> add(n + 2, 0);
    for (int i = 1; i <= m; i++) {
        if (opCount[i] == 0) continue;
        long long val = ops[i].d * opCount[i];
        add[ops[i].l] += val;
        if (ops[i].r + 1 <= n) add[ops[i].r + 1] -= val;
    }
    for (int i = 1; i <= n; i++) {
        add[i] += add[i - 1];
        a[i] += add[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? '\n' : ' ');
    }
    return 0;
}
