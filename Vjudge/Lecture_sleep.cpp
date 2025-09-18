#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);               // theorems per minute (1-indexed)
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<long long> awakePrefix(n + 1, 0); // prefix sum where Mishka is awake
    vector<long long> sleepPrefix(n + 1, 0); // prefix sum where Mishka is asleep

    // Read awake/asleep flags and build prefix sums
    for (int i = 1; i <= n; i++) {
        int flag;                       // 1 = awake, 0 = asleep
        cin >> flag;

        awakePrefix[i] = awakePrefix[i - 1];
        sleepPrefix[i] = sleepPrefix[i - 1];

        if (flag == 1) {
            awakePrefix[i] += a[i];
        } else {
            sleepPrefix[i] += a[i];
        }
    }

    long long alwaysWritten = awakePrefix[n];
    long long bestExtra = 0;

    // Slide a window of length k to find max extra theorems
    for (int end = k; end <= n; end++) {
        long long extra = sleepPrefix[end] - sleepPrefix[end - k];
        bestExtra = max(bestExtra, extra);
    }

    cout << alwaysWritten + bestExtra << '\n';
    return 0;
}
