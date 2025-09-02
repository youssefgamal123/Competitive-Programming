#include <iostream>
#include <string>
using namespace std;

int solve(const string &s) {
    int balance = 0, min_balance = 0;
    for (char ch : s) {
        if (ch == '(') balance++;
        else balance--;
        min_balance = min(min_balance, balance);
    }
    return abs(min_balance); // how many moves needed
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
