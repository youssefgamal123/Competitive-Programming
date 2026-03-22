#include <bits/stdc++.h>
using namespace std;

vector<long long> coins;
vector<long long> memo;

long long solve(int index) {

    if (index < 0) return 0;

    if (memo[index] != -1) return memo[index];

    long long take = coins[index] + solve(index - 2);
    long long skip = solve(index - 1);

    return memo[index] = max(take, skip);
}

int main() {

    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++) {

        int n;
        cin >> n;

        coins.resize(n);
        for (int i = 0; i < n; i++) cin >> coins[i];

        memo.assign(n, -1);

        long long ans = solve(n - 1);

        cout << "Case " << tc << ": " << ans << "\n";
    }
}