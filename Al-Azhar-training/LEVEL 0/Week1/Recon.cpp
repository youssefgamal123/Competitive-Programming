#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    sort(heights.begin(), heights.end());

    int ways = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (heights[j] - heights[i] <= d) {
                ways += 2; // (i, j) and (j, i) are different pairs
            } else {
                break; // No more valid pairs for this i
            }
        }
    }

    cout << ways;

    return 0;
}
