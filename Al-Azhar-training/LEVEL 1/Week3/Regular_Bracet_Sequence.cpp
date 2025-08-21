#include <iostream>
#include <stack>
#include <string>

using namespace std;

int maxLengthOfRegularBracketSequence(const string& s) {
    stack<char> st;
    int validPairs = 0;

    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else if (!st.empty()) {
            st.pop();
            validPairs++;
        }
    }

    return (2 * validPairs + st.size() ) -1;
}

int main() {
    string s;
    cin >> s;

    cout << maxLengthOfRegularBracketSequence(s) << endl;

    return 0;
}
