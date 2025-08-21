#include <iostream>
#include <climits>

using namespace std;

int main() {
    // Read input values
    int N;
    cin >> N;

    int minTrailingZeros = INT_MAX;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;

        // Count the number of trailing zeros in each element
        int trailingZeros = 0;
        while (num % 2 == 0) {
            num /= 2;
            trailingZeros++;
        }

        // Update minTrailingZeros if necessary
        minTrailingZeros = min(minTrailingZeros, trailingZeros);
    }

    cout << minTrailingZeros << endl;

    return 0;
}
