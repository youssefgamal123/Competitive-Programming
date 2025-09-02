#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;

    while (n--) {
        string op;
        cin >> op;

        if (op == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if (op == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if (op == "pop_back") {
            if (!dq.empty()) dq.pop_back();
        }
        else if (op == "pop_front") {
            if (!dq.empty()) dq.pop_front();
        }
        else if (op == "front") {
            if (!dq.empty()) cout << dq.front() << "\n";
        }
        else if (op == "back") {
            if (!dq.empty()) cout << dq.back() << "\n";
        }
        else if (op == "print") {
            int idx;
            cin >> idx;
            if (idx >= 1 && idx <= (int)dq.size()) {
                cout << dq[idx - 1] << "\n"; // 1-based index
            }
        }
    }

    return 0;
}
