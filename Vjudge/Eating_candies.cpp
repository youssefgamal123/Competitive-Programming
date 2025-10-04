#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(vector<int>& candies_weight) {

    int n = candies_weight.size();
    int left = 0, right = n - 1;
    long long left_sum = 0, right_sum = 0;
    int ans = 0;

    while (left <= right) {
        if (left_sum < right_sum) {
            left_sum += candies_weight[left];
            left++;
        } else if (right_sum < left_sum) {
            right_sum += candies_weight[right];
            right--;
        } else {
            ans = max(ans, left + (n - right - 1));

            if (left <= right) {
                left_sum += candies_weight[left];
                left++;
            }
        }
    }

    if (left_sum == right_sum) {
        ans = max(ans, left + (n - right - 1));
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> candies_weight(n);
        for (int i = 0; i < n; i++) {
            cin >> candies_weight[i];
        }
        solve(candies_weight);
    }

    return 0;
}