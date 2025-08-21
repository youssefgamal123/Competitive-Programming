#include <iostream>
using namespace std;

long long kthCard(int n, long long k) {
    long long oddCards = (k + 1) / 2; // Number of odd-numbered cards before the k-th card
    if (k % 2 == 0) return 2 * oddCards; // Twice an odd number
    return 2 * (oddCards - 1) + 1; // Odd number
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        cout << kthCard(n, k) << endl;
    }

    return 0;
}
