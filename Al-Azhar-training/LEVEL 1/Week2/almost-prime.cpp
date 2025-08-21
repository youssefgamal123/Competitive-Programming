#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int countAlmostPrimes(int n) {
    int counter = 0;

    for (int i = 2; i <= n; i++) {
        int divisors = 0;

        for (int j = 2; j <= i; j++) {
            if (i % j == 0 && isPrime(j)) {
                divisors++;
            }
            if (divisors > 2) {
                break;  // No need to check further if more than 2 prime divisors
            }
        }

        if (divisors == 2) {
            counter++;
        }
    }

    return counter;
}

int main() {
    int n;
    cin >> n;

    int result = countAlmostPrimes(n);
    cout << result;

    return 0;
}
