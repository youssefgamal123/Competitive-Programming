#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int left = 0, ans = 0;
    for (int right = 0; right < n; right++) {
        while (nums[right] - nums[left] > 5) {
            left++;
        }
        ans = max(ans, right - left + 1);
    }

    cout << ans << endl;
    return 0;
}
