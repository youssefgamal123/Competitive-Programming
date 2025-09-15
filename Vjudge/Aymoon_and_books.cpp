#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    deque<int> shelf(N);
    for (int i = 0; i < N; i++) cin >> shelf[i];

    int Q;
    cin >> Q;

    priority_queue<int> table;
    unordered_set<int> onTable;

    while (Q--) {
        char c;
        cin >> c;
        if (c == 'L') {
            if (!shelf.empty()) {
                int x = shelf.front();
                shelf.pop_front();
                table.push(x);
                onTable.insert(x);
            }
        } else if (c == 'R') {
            if (!shelf.empty()) {
                int x = shelf.back();
                shelf.pop_back();
                table.push(x);
                onTable.insert(x);
            }
        } else if (c == 'Q') {
            // clean stale elements
            while (!table.empty() && onTable.find(table.top()) == onTable.end()) {
                table.pop();
            }
            if (table.empty()) {
                cout << -1 << "\n";
            } else {
                int best = table.top();
                table.pop();
                onTable.erase(best);
                cout << best << "\n";
            }
        }
    }
    return 0;
}
