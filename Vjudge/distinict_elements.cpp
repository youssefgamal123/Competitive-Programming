#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // 1. Store distinct elements only
    set<int> s(arr.begin(), arr.end());
    vector<int> distinct(s.begin(), s.end());

    while (q--) {
        int x;
        cin >> x;

        // count distinct < x
        int smaller = lower_bound(distinct.begin(), distinct.end(), x) - distinct.begin();
        // count distinct > x
        int greater = distinct.end() - upper_bound(distinct.begin(), distinct.end(), x);

        cout << smaller << " " << greater << "\n";
    }

    return 0;
}
