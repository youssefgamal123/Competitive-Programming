#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;

        // 2D grid of total area per (h,w)
        static long long grid[MAX + 2][MAX + 2];
        static long long pref[MAX + 2][MAX + 2];

        // reset only needed part
        for (int i = 0; i <= MAX; ++i)
            fill(grid[i], grid[i] + MAX + 1, 0);

        for (int i = 0; i < n; i++) {
            int h, w;
            cin >> h >> w;
            grid[h][w] += 1LL * h * w;
        }

        // build 2D prefix sum
        for (int i = 1; i <= MAX; i++) {
            long long rowSum = 0;
            for (int j = 1; j <= MAX; j++) {
                rowSum += grid[i][j];
                pref[i][j] = pref[i - 1][j] + rowSum;
            }
        }

        while (q--) {
            int hs, ws, hb, wb;
            cin >> hs >> ws >> hb >> wb;

            // we need (hs < h < hb) and (ws < w < wb)
            int h1 = hs + 1, h2 = hb - 1;
            int w1 = ws + 1, w2 = wb - 1;

            if (h1 > h2 || w1 > w2) {
                cout << 0 << "\n";
                continue;
            }

            long long ans = pref[h2][w2]
                           - pref[hs][w2]
                           - pref[h2][ws]
                           + pref[hs][ws];
            cout << ans << "\n";
        }
    }
    return 0;
}
