#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> order(2 * n);
    for (int i = 0; i < 2 * n; ++i) cin >> order[i];

    vector<bool> onTable(n + 1, false);
    int current = 0, maxTable = 0;

    for (int x : order) {
        if (!onTable[x]) {          // first sock of this pair
            onTable[x] = true;
            ++current;
            maxTable = max(maxTable, current);
        } else {                    // second sock of this pair
            onTable[x] = false;
            --current;
        }
    }

    cout << maxTable << "\n";
    return 0;
}
