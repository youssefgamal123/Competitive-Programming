#include <iostream>
#include <algorithm> // Include this header for the sort function
using namespace std;

void binarySearch(const int arr[], int size, int query) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == query) {
            cout << "found" << endl;  // Query found
            return;                   // Add return to exit the function
        } else if (arr[mid] < query) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    cout << "not found" << endl;  // Query not found
}

int main() {
    int size_of_array, Query;

    cin >> size_of_array >> Query;

    int numbers[size_of_array];

    for (int i = 0; i < size_of_array; i++) {
        cin >> numbers[i];
    }

    // Sort the array before performing binary search
    sort(numbers, numbers + size_of_array);

    while (Query > 0) {
        int query;
        cin >> query;
        binarySearch(numbers, size_of_array, query);
        Query--;
    }

    return 0;
}
