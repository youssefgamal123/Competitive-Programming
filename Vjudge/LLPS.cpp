#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &t) {
    string r = t;
    reverse(r.begin(), r.end());
    return t == r;
}

void generate(int index, const string &s, string current, vector<string> &subs) {
    if (index == s.size()) {
        if (!current.empty()) subs.push_back(current);
        return;         // base case
    }


    // state is index i

        // transitions
    generate(index + 1, s, current, subs);       // leave
    generate(index + 1, s, current + s[index], subs);   // take
}

int main() {
    string s;
    cin >> s;
    vector<string> subs;
    generate(0, s, "", subs);
    string best = "";
    for (auto &t : subs) {
        if (isPalindrome(t)) {
            if (t > best) best = t;
        }
    }
    cout << best << "\n";
}
