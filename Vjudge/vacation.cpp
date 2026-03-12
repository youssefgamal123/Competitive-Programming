#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> a, b, c;
long long dp[100005][4];

long long solve(int day, int last) {
    if (day == n) return 0;

    if (dp[day][last] != -1) return dp[day][last];

    long long ans = 0;

    if (last != 0) ans = max(ans, a[day] + solve(day + 1, 0));
    if (last != 1) ans = max(ans, b[day] + solve(day + 1, 1));
    if (last != 2) ans = max(ans, c[day] + solve(day + 1, 2));

    return dp[day][last] = ans;
}

int main() {
    cin >> n;

    a.resize(n);
    b.resize(n);
    c.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 4; j++)
            dp[i][j] = -1;

    cout << solve(0, 3);
}