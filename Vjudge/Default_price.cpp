#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> C(N);
    for (int i = 0; i < N; i++) cin >> C[i];

    vector<string> D(M);
    for (int i = 0; i < M; i++) cin >> D[i];

    vector<int> P(M + 1);
    for (int i = 0; i <= M; i++) cin >> P[i];

    // Map colors in D to their prices
    unordered_map<string, int> price;
    for (int i = 0; i < M; i++) {
        price[D[i]] = P[i + 1];
    }

    long long total = 0;
    for (string &color : C) {
        if (price.count(color)) {
            total += price[color];
        } else {
            total += P[0]; // default price
        }
    }

    cout << total << endl;
    return 0;
}
