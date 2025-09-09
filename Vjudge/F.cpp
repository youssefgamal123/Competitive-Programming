#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<string, int> db;

    while (n--) {
        string s;
        cin >> s;

        if (db.find(s) == db.end()) {
            cout << "OK\n";
            db[s] = 0;
        } else {
            int idx = ++db[s];
            string newName = s + to_string(idx);

            while (db.find(newName) != db.end()) {
                idx = ++db[s];
                newName = s + to_string(idx);
            }

            cout << newName << "\n";
            db[newName] = 0;
        }
    }
    return 0;
}
