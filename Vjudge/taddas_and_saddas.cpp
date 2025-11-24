#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    queue<string> q;
    vector<string> lucky;

    q.push("4");
    q.push("7");

    while (!q.empty()) {
        string s = q.front();
        q.pop();

        lucky.push_back(s);

        if (s.size() < n.size()) {
            q.push(s + "4");
            q.push(s + "7");
        }
    }

    sort(lucky.begin(), lucky.end());

    int index = 0;
    for (int i = 0; i < (int)lucky.size(); i++) {
        if (lucky[i] == n) {
            index = i + 1;
            break;
        }
    }

    cout << index << endl;
    return 0;
}
