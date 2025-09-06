#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string S;
    cin >> N >> S;

    vector<int> left(N+1, -1), right(N+1, -1);
    int last = 0;

    for (int i = 1; i <= N; i++) {
        if (S[i-1] == 'L') {
            int l = left[last];
            if (l != -1) right[l] = i;
            left[i] = l;
            right[i] = last;
            left[last] = i;
        } else {
            int r = right[last];
            if (r != -1) left[r] = i;
            right[i] = r;
            left[i] = last;
            right[last] = i;
        }
        last = i;
    }

    int cur = last;
    while (left[cur] != -1) cur = left[cur];

    while (cur != -1) {
        cout << cur << " ";
        cur = right[cur];
    }
    cout << "\n";
    return 0;
}
