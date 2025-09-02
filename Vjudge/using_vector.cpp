#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

    int N, q;
    cin >> N >> q;
    vector<long long> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];

    while (q--) {
        string cmd;
        cin >> cmd;
        if (cmd == "pop_back") {
            arr.pop_back();
        }
        else if (cmd == "front") {
            cout << arr.front() << "\n";
        }
        else if (cmd == "back") {
            cout << arr.back() << "\n";
        }
        else if (cmd == "sort") {
            int l, r;
            cin >> l >> r;
            sort(arr.begin() + (l - 1), arr.begin() + r);
        }
        else if (cmd == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(arr.begin() + (l - 1), arr.begin() + r);
        }
        else if (cmd == "print") {
            int pos;
            cin >> pos;
            cout << arr[pos - 1] << "\n";
        }
        else if (cmd == "push_back") {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
    }

    return 0;
}
