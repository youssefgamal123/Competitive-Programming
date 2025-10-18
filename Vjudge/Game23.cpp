#include <iostream>
#include <climits>
using namespace std;

long long solve(long long n, long long m) {


    if (n == m) return 0; // base case



    if (n > m) return LLONG_MAX;

    // steps transitions

    long long a = solve(n * 2, m);
    long long b = solve(n * 3, m);

    if (a != LLONG_MAX) a++;
    if (b != LLONG_MAX) b++;

    return min(a, b);
}

int main() {
    long long n, m;
    cin >> n >> m;

    long long ans = solve(n, m);

    if (ans == LLONG_MAX) cout << -1;
    else cout << ans<<endl;

    return 0;
}
