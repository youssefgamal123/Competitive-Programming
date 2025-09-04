#include <bits/stdc++.h>
using namespace std;

bool match(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}') ||
           (open == '<' && close == '>');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    stack<int> st;
    int lastInvalid = -1;
    int maxLen = 0, count = 1; // count starts at 1 for "0 length" case

    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{' || c == '<') {
            st.push(i);
        } else {
            if (!st.empty() && match(s[st.top()], c)) {
                st.pop();
                int curLen;
                if (st.empty()) curLen = i - lastInvalid;
                else curLen = i - st.top();

                if (curLen > maxLen) {
                    maxLen = curLen;
                    count = 1;
                } else if (curLen == maxLen) {
                    count++;
                }
            } else {
                while (!st.empty()) st.pop();
                lastInvalid = i;
            }
        }
    }

    if (maxLen == 0) cout << "0 1\n";
    else cout << maxLen << " " << count << "\n";

    return 0;
}
