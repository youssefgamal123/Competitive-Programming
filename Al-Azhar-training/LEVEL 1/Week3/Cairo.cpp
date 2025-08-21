#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

bool canReorderTrucks(int n, const vector<int>& trucks) {
    stack<int> st;
    int expected = 1; // Next expected truck number

    for (int i = 0; i < n; ++i) {
        if (trucks[i] == expected) {
            ++expected; // Update expected number for the next truck
        } else {
            while (!st.empty() && st.top() == expected) {
                st.pop();
                ++expected; // Update expected number for the next truck
            }
            st.push(trucks[i]);
        }
    }

    // Check if the remaining trucks in the stack can be re-ordered
    while (!st.empty() && st.top() == expected) {
        st.pop();
        ++expected;
    }

    return st.empty(); // If stack is empty, all trucks can be re-ordered
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> trucks(n);
        for (int i = 0; i < n; ++i) {
            cin >> trucks[i];
        }

        if (canReorderTrucks(n, trucks)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
