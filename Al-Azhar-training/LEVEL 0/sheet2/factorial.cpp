#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int T, N;

    cin >> T; // Number of test cases

    for (int i = 0; i < T; i++) {
        cin >> N; // Input number for which factorial is to be calculated
        int result = factorial(N);
        cout << result << endl;
    }

    return 0;
}
