#include <iostream>

using namespace std;

int main() {
    // Read the number of houses
    int n;
    cin >> n;

    // Read the heights of the houses
    int heights[100005];
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    // Initialize the result array with zeros
    int result[100005] = {0};

    // Traverse the houses from right to left
    int max_height = 0;
    for (int i = n - 1; i >= 0; --i) {
        // Update the result for the current house
        result[i] = max(0, max_height - heights[i] + 1);

        // Update the maximum height encountered so far
        max_height = max(max_height, heights[i]);
    }

    // Print the result
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
