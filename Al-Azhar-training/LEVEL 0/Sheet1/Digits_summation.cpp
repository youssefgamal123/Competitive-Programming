#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    // Get the last digit of each number
    int last_digit_N = N % 10;
    int last_digit_M = M % 10;

    // Calculate the sum of last digits
    int sum_last_digits = last_digit_N + last_digit_M;

    cout << sum_last_digits << endl;

    return 0;
}
