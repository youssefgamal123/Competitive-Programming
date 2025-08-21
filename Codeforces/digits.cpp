#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Calculate the sum of digits for each number from 1 to n
        long long sum = 0;
        for (int i = 1; i <= n; ++i) {
            int num = i;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
