#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;
    while (q--) {
        long long mi;
        cin >> mi;

        // number of shops where price <= mi
        int count = upper_bound(prices.begin(), prices.end(), mi) - prices.begin();
        cout << count << "\n";
    }

    return 0;
}
