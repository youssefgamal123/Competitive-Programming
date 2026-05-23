#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
int memo[10005][105];

bool solve(int index, int rem) {

    if (index == n) {
        return rem == 0;
    }

    if (memo[index][rem] != -1)
        return memo[index][rem];

    int add = ((rem + a[index]) % k + k) % k;
    int sub = ((rem - a[index]) % k + k) % k;

    return memo[index][rem] =
        solve(index + 1, add) || solve(index + 1, sub);
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        cin >> n >> k;

        a.resize(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        memset(memo, -1, sizeof(memo));

        int start = ((a[0] % k) + k) % k;

        if (solve(1, start))
            cout << "Divisible\n";
        else
            cout << "Not divisible\n";
    }
}