#include <iostream>

using namespace std;

int main() {
    // Read input
    int N;

    cin >> N;

    // Ensure N is at least 1
    if (N < 1) {
        cout << "Invalid input. N should be at least 1." << endl;
        return 1;
    }

    // Create an array and store user input
    int array[N];
    for (int i = 0; i < N; ++i) {
        array[i] = i;
    }

    // Print the Fibonacci series based on the array
    for (int i = 0; i < N; ++i) {
        // Calculate Fibonacci number based on the array element
        int fib_num;
        if (i <= 1) {
            fib_num = i;
        } else {
            fib_num = array[i - 1] + array[i - 2];
        }
        cout << fib_num << " ";
    }

    return 0;
}
