#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<long long> need(N, 0), gain(N, 0);

    for (int i = 0; i < M; i++) {
        int Y, X;
        long long Z;
        cin >> Y >> X >> Z;
        --Y; --X;
        need[Y]  += Z;
        gain[X]  += Z;
    }

    for (int i = 0; i < N; i++) {
        long long finalCoins = A[i] + gain[i] - need[i];
        if (finalCoins < 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
