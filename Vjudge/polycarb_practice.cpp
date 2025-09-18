#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++) v.push_back({a[i], i});
    sort(v.rbegin(), v.rend());

    long long total = 0;
    vector<int> idx;
    for (int i = 0; i < k; i++) {
        total += v[i].first;
        idx.push_back(v[i].second);
    }

    sort(idx.begin(), idx.end());
    cout << total << "\n";

    vector<int> seg;
    int prev = -1;
    for (int i = 0; i < k; i++) {
        if (i == k-1) seg.push_back(n - prev - 1);
        else {
            seg.push_back(idx[i] - prev);
            prev = idx[i];
        }
    }
    for (int i = 0; i < k; i++) cout << seg[i] << " ";
    cout << "\n";
    return 0;
}
