#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> photos(M, vector<int>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> photos[i][j];
        }
    }


    vector<vector<bool>> good(N+1, vector<bool>(N+1, false));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N-1; j++) {
            int a = photos[i][j];
            int b = photos[i][j+1];
            good[a][b] = good[b][a] = true;
        }
    }

    long long total_pairs = 1LL * N * (N-1) / 2;
    long long good_pairs = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = i+1; j <= N; j++) {
            if (good[i][j]) good_pairs++;
        }
    }

    cout << (total_pairs - good_pairs) << endl;
    return 0;
}
