#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    int q;
    cin >> str >> q;

    deque<char> dq(str.begin(), str.end());
    bool reversed = false;

    while (q--) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            reversed = !reversed;
        } else {
            int operation;
            cin >> operation;
            char c;
            cin >> c;

            if ((operation == 1 && !reversed) || (operation == 2 && reversed)) {
                dq.push_front(c);
            } else {
                dq.push_back(c);
            }
        }
    }

    if (reversed) {
        for (auto it = dq.rbegin(); it != dq.rend(); ++it) cout << *it;
    } else {
        for (char c : dq) cout << c;
    }
    cout << "\n";

    return 0;
}
