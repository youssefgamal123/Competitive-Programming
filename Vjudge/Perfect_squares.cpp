#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

bool isPerfectSquare(long long x) {
    if (x < 0) return false;
    long long s = floor(sqrt((long double)x));
    return s * s == x;
}

int main() {
    int n;
    cin >> n;

    vector<long long> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    long long largestNotPerfect = LLONG_MIN;

    for (long long num : nums) {
        if (!isPerfectSquare(num)) {
            largestNotPerfect = max(largestNotPerfect, num);
        }
    }

    cout << largestNotPerfect << endl;
    return 0;
}
