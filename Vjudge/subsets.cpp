#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> a;
vector<vector<long long>> subs;

void generate(int index, vector<long long> current) {
    if (index == n) {
        if (!current.empty()) subs.push_back(current);
        return;     // base case
    }
    generate(index + 1, current);
    current.push_back(a[index]);        // taken
    generate(index + 1, current);       //left
}

int main() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    generate(0, {});
    sort(subs.begin(), subs.end());
    for (const auto &v : subs) {
        for (int i = 0; i < (int)v.size(); i++) {
            cout << v[i];
            if (i + 1 < (int)v.size()) cout << " ";
        }
        cout << '\n';
    }
}
