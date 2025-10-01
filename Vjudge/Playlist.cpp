#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 1;
    cin >> n;
    vector<int> vec(n + 1);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
        cin >> vec[i];

    int l = 1, r = 1;
    while (r <= n) {
        mp[vec[r]]++;

        while (l < r && mp[vec[r]] > 1)
            mp[vec[l]]--, l++;

        ans = max(ans, (r - (l - 1)));
        r++;
    }
    cout << ans;
}
