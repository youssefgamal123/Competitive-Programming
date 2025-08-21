#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    int n, B;
    cin >> n >> B;

    // Read sequence
    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    // Initialize variables to keep track of the count of even and odd elements
    int even_count = 0, odd_count = 0;

    // Initialize a vector to store the cost of cuts
    vector<int> cut_costs;

    // Iterate through the sequence and calculate the cost of each cut
    for (int i = 0; i < n - 1; ++i) {
        if (sequence[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

        if (even_count == odd_count) {
            cut_costs.push_back(abs(sequence[i] - sequence[i + 1]));
        }
    }

    // Sort the cut costs in ascending order
    sort(cut_costs.begin(), cut_costs.end());

    // Initialize variables to keep track of the total cuts and cost
    int total_cuts = 0, total_cost = 0;

    // Iterate through the sorted cut costs and add cuts while staying within the budget
    for (int cost : cut_costs) {
        if (total_cost + cost <= B) {
            total_cuts++;
            total_cost += cost;
        } else {
            break;
        }
    }

    // Print the result
    cout << total_cuts << endl;

    return 0;
}
