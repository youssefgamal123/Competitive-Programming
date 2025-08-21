#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        map<int, int> cnt;
        for (int i = 0; i < n; ++i) {
            int mask = 0;
            for (int j = 0; j < 31; ++j) {
                if (a[i] & (1 << j)) {
                    mask |= (1 << j);
                }
            }
            cnt[mask]++;
        }

        int ans = 0;
        for (auto it : cnt) {
            ans = max(ans, it.second);
        }

        cout << ans+2 << endl;
    }

    return 0;
}
