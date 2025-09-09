#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    if (k == 0) {
        if (a[0] > 1) cout << 1 << "\n";
        else cout << -1 << "\n";
    }
    else if (k == n) {
        cout << a[n-1] << "\n";
    }
    else {
        if (a[k-1] < a[k]) cout << a[k-1] << "\n";
        else cout << -1 << "\n";
    }

    return 0;
}
