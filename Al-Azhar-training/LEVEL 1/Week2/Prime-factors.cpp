#include <iostream>

using namespace std;

// Function to find prime factorization of a number and print the results
void primeFactorization(int n) {
    // Iterate through 2 to sqrt(n) to find prime factors
    for (int i = 2; i * i <= n; ++i) {
        int count = 0;

        // Check if i is a prime factor
        while (n % i == 0) {
            n /= i;
            ++count;
        }

        // Print the prime factor and its power
        if (count > 0) {
            cout << i << " " << count << endl;
        }
    }

    // If n is still greater than 1, it is a prime factor itself
    if (n > 1) {
        cout << n << " " << 1 << endl;
    }
}

int main() {
    int N;
    cin >> N;

    primeFactorization(N);

    return 0;
}
