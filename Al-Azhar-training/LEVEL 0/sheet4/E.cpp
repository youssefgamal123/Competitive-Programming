#include <iostream>
#include <vector>

int main() {
    // Read input values
    int y, k, n;
    std::cin >> y >> k >> n;

    // Calculate the starting point for x
    int x_start = k - (y % k);

    // Initialize a vector to store possible values of x
    std::vector<int> possible_x;

    // Find all possible values of x
    for (int x = x_start; x + y <= n; x += k) {
        possible_x.push_back(x);
    }

    // Print the results
    if (possible_x.empty()) {
        std::cout << -1 << std::endl;
    } else {
        for (int x : possible_x) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
