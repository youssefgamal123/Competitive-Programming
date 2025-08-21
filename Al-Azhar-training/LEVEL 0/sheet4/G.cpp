#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    const int maxElement = 1000006;
    int freq[maxElement] = {};
    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int niceIndices[n];
    int niceCount = 0;

    for (int i = 0; i < n; ++i) {
        freq[a[i]]--; // Remove the current element

        // Calculate the sum of remaining elements
        long long sum = 0;
        for (int j = 1; j < maxElement; ++j) {
            sum += 1LL * j * freq[j];
        }

        // Check if the current element can make the array good
        if (a[i] == sum) {
            niceIndices[niceCount++] = i + 1;
        }

        freq[a[i]]++; // Restore the current element
    }

    // Print the results
    cout << niceCount << endl;
    for (int i = 0; i < niceCount; ++i) {
        cout << niceIndices[i] << " ";
    }

    return 0;
}
