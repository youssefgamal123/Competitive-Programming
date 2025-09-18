#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    array<int, 256> freq1 = {0}, freq2 = {0};

    for (char c : s1) {
        if (c != ' ') freq1[(unsigned char)c]++;
    }

    for (char c : s2) {
        if (c != ' ') freq2[(unsigned char)c]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq2[i] > freq1[i]) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
