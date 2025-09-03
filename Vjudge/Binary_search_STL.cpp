#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    string type;
    int query_val;
    while (q--) {
        cin >> type >> query_val;

        if (type == "binary_search") {
            if (binary_search(nums.begin(), nums.end(), query_val)) {
                cout << "found" << endl;
            } else {
                cout << "not found" << endl;
            }
        }
        else if (type == "lower_bound") {
            auto it = lower_bound(nums.begin(), nums.end(), query_val);
            if (it == nums.end()) {
                cout << -1 << endl;
            } else {
                cout << *it << endl;
            }
        }
        else if (type == "upper_bound") {
            auto it = upper_bound(nums.begin(), nums.end(), query_val);
            if (it == nums.end()) {
                cout << -1 << endl;
            } else {
                cout << *it << endl;
            }
        }
    }

    return 0;
}
