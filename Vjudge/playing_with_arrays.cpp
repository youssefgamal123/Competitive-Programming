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

        deque<int> dq;
        for (int i = N; i >= 1; --i) {
            if (!dq.empty()) {
                dq.push_front(dq.back()); // move last to front (reverse of step 2)
                dq.pop_back();
            }
            dq.push_front(i);
        }

        for (int x : dq) cout << x << ' ';
        cout << endl;
    }
    return 0;
}
