#include <bits/stdc++.h>
using namespace std;

int main() {
    char p, q;
    cin >> p >> q;


    unordered_map<char,int> pos = {
        {'A', 0},
        {'B', 3},
        {'C', 4},
        {'D', 8},
        {'E', 9},
        {'F', 14},
        {'G', 23}
    };

    cout << abs(pos[p] - pos[q]) << "\n";
    return 0;
}
