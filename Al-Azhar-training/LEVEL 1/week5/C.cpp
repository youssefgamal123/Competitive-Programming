#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size_a, size_b;
    cin >> size_a >> size_b;

    int numbers_A[size_a];
    int numbers_B[size_b];

    // Input array A
    for (int i = 0; i < size_a; i++)
        cin >> numbers_A[i];

    // Input array B
    for (int i = 0; i < size_b; i++)
        cin >> numbers_B[i];

    // Sort array A
    sort(numbers_A, numbers_A + size_a);

    // For each element in array B, find the count of elements in array A less than or equal to it
    for (int i = 0; i < size_b; i++) {
        // Binary search to find the position of the first element in array A greater than the current element in B
        int left = 0, right = size_a - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (numbers_A[mid] <= numbers_B[i])
                left = mid + 1;
            else
                right = mid - 1;
        }
        // The count is equal to the index of the first element greater than B[i]
        cout << left << " ";
    }

    return 0;
}
