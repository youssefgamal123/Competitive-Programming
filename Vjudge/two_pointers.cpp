#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    long long l = 0, r = 0, sum = 0;
    long long ans = LLONG_MAX;

    while (l < n) {
        while (r < n && sum < target) {
            sum += nums[r];
            r++;
        }
        if (sum >= target) ans = min(ans, r - l);
        sum -= nums[l];
        l++;
    }

    if (ans == LLONG_MAX) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
