#include <bits/stdc++.h>
using namespace std;

bool letter(char c) {
    return c >= 'a' && c <= 'z';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    if (!getline(cin, line)) return 0;

    stringstream ss(line);
    string token;
    string ans;

    while (ss >> token) {
        if (!ans.empty() && ans.back() != ' ' && letter(token[0]))
            ans += ' ';
        for (char c : token) {
            ans += c;
            if (!letter(c))
                ans += ' ';
        }
    }

    cout << ans << '\n';
    return 0;
}
