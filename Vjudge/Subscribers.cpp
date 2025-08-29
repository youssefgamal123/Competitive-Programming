#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if (N < 1000) {
        cout << N << "\n";
    }
    else if (N < 10000) {
        cout << (N / 10) * 10 << "\n";
    }
    else if (N < 100000) {
        cout << (N / 100) * 100 << "\n";
    }
    else if (N < 1000000) {
        cout << (N / 1000) * 1000 << "\n";
    }
    else if (N < 10000000) {
        cout << (N / 10000) * 10000 << "\n";
    }
    else if (N < 100000000) {
        cout << (N / 100000) * 100000 << "\n";
    }
    else if (N < 1000000000) {
        cout << (N / 1000000) * 1000000 << "\n";
    }

    return 0;
}
