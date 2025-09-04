#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> l(n), r(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    // Find max1, max2 of l; min1, min2 of r
    int max1 = -1, max2 = -1, idxMax1 = -1;
    int min1 = 1e9+5, min2 = 1e9+5, idxMin1 = -1;

    for (int i = 0; i < n; i++) {
        if (l[i] > max1) {
            max2 = max1;
            max1 = l[i];
            idxMax1 = i;
        } else if (l[i] > max2) {
            max2 = l[i];
        }

        if (r[i] < min1) {
            min2 = min1;
            min1 = r[i];
            idxMin1 = i;
        } else if (r[i] < min2) {
            min2 = r[i];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int newL = (i == idxMax1 ? max2 : max1);
        int newR = (i == idxMin1 ? min2 : min1);
        ans = max(ans, max(0, newR - newL));
    }

    cout << ans << "\n";
    return 0;
}
