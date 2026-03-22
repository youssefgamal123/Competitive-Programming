#include <bits/stdc++.h>
using namespace std;

string s, t;
int memo[5005][5005];

int solve(int i, int j) {

    if (i == s.size()) return t.size() - j;
    if (j == t.size()) return s.size() - i;

    if (memo[i][j] != -1) return memo[i][j];

    if (s[i] == t[j])
        return memo[i][j] = solve(i + 1, j + 1);

    int insertOp = solve(i, j + 1);
    int deleteOp = solve(i + 1, j);
    int replaceOp = solve(i + 1, j + 1);

    return memo[i][j] = 1 + min({insertOp, deleteOp, replaceOp});
}

int main() {

    cin >> s >> t;

    memset(memo, -1, sizeof(memo));

    cout << solve(0, 0);
}