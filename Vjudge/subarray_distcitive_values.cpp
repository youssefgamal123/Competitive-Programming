#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<int,int> freq;
    long long ans = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        freq[arr[r]]++;

        while ((int)freq.size() > k) {
            freq[arr[l]]--;
            if (freq[arr[l]] == 0) freq.erase(arr[l]);
            l++;
        }
        ans += (r - l + 1);
    }

    cout << ans << "\n";
    return 0;
}
