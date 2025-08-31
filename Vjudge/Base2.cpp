#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long res = 0;
    for (int i = 0; i < 64; ++i) {
        int a;
        if (!(cin >> a)) return 0;
        if (a == 1) res |= (1ULL << i);
    }
    cout << res << endl;
    return 0;
}
