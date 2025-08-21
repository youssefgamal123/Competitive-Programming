#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Bubble Sort Algorithm
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            // Swap elements if they are in the wrong order
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }

    return 0;
}
