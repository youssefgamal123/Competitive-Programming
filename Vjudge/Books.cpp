#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int left = 0, right = 0;
    long long window_sum = 0;
    int ans = 0;

    while (right < n) {
        window_sum += nums[right];

        while (window_sum > target) {
            window_sum -= nums[left];
            left++;
        }
        ans = max(ans, right - left + 1);
        right++;
    }

    cout << ans << endl;
    return 0;
}
