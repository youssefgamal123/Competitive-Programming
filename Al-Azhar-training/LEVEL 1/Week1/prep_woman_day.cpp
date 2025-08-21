#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> remainderCount(k, 0);

    for (int i = 0; i < n; ++i) {
        int candies;
        cin >> candies;
        remainderCount[candies % k]++;
    }

    int ans = min(remainderCount[0] / 2 * 2, n);

    for (int i = 1; i <= k / 2; ++i) {
        if (i != k - i) {
            ans += min(remainderCount[i], remainderCount[k - i]) * 2;
        } else {
            ans += remainderCount[i] / 2 * 2;
        }
    }

    cout << ans << endl;

    return 0;
}
