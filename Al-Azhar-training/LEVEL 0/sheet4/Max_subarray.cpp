#include <iostream>
#include <climits>

int main() {
    int n;
    std::cin >> n;

    long long max_sum = LLONG_MIN;
    long long current_sum = 0;

    for (int i = 0; i < n; ++i) {
        int ai;
        std::cin >> ai;

        // Update the current sum or start a new subarray
        current_sum = std::max(static_cast<long long>(ai), current_sum + ai);

        // Update the maximum subarray sum
        max_sum = std::max(max_sum, current_sum);
    }

    std::cout << max_sum << std::endl;

    return 0;
}
