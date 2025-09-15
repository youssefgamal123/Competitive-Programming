#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> a(N);
        for (int i = 0; i < N; i++) cin >> a[i];

        set<vector<int>> uniqueSeq;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                vector<int> b = a;         // copy original sequence
                swap(b[i], b[j]);          // perform the swap
                uniqueSeq.insert(b);       // insert into set
            }
        }

        cout << uniqueSeq.size() << "\n";
    }
    return 0;
}
