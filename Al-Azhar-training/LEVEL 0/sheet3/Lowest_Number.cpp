#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int minNumber = A[0];
    int minPosition = 1;

    for (int i = 1; i < N; ++i) {
        if (A[i] < minNumber) {
            minNumber = A[i];
            minPosition = i + 1;  // Adjusting to 1-index
        }
    }

    cout << minNumber << " " << minPosition;

    return 0;
}

// 1 2 3 4 
