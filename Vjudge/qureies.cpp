#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];

    // sort array a
    sort(a.begin(), a.end());

    for (int j = 0; j < m; j++) {
        // count of elements <= b[j]
        int cnt = upper_bound(a.begin(), a.end(), b[j]) - a.begin();
        cout << cnt << " ";
    }
    cout << "\n";

    return 0;
}
