#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    long long sum = 0;
    int left = 0, count = 0;

    for (int right = 0; right < n; right++) {
        sum += nums[right];

        while (sum > target && left <= right) {
            sum -= nums[left];
            left++;
        }

        if (sum == target)
            count++;
    }

    cout << count << '\n';
    return 0;
}
