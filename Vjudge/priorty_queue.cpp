#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> pq; // min-heap

    while (q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (cmd == "pop") {
            pq.pop();
        }
        else if (cmd == "top") {
            cout << pq.top() << "\n";
        }
    }

    return 0;
}
