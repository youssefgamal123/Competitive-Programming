#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    a = a % b;

    for (int i = 1; i <= b * 10; ++i) {
        a *= 10;
        int digit = a / b;
        if (digit == c) {
            cout << i << endl;
            return 0;
        }
        a %= b;
    }

    cout << -1 << endl;
    return 0;
}
