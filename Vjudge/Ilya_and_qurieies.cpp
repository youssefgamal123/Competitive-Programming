#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> prefix(n, 0);

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1];
        if (s[i - 1] == '.' && s[i] == '.') {
            prefix[i]++;
        }
    }

    int m;
    cin >> m;
    while (m--) {
        int l, r;
        cin >> l >> r;
        int ans = prefix[r - 1] - prefix[l - 1];
        cout << ans << endl;
    }

    return 0;
}
