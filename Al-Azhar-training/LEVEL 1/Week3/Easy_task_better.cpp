#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    deque<int> A;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        A.push_back(val);
    }

    bool reversed = false; // Flag to indicate whether the array is reversed

    for (int i = 0; i < m; ++i) {
        int operation;
        cin >> operation;
        if (operation == 1) {
            reversed = !reversed; // Toggle the flag
        } else { // operation type 2
            int place, value;
            cin >> place >> value;
            if ((place == 1 && !reversed) || (place == 2 && reversed)) {
                A.push_front(value); // Insert at the beginning if not reversed, or at the end if reversed
            } else {
                A.push_back(value); // Insert at the end if not reversed, or at the beginning if reversed
            }
        }
    }

    // If the array is reversed, reverse it
    if (reversed) {
        reverse(A.begin(), A.end());
    }

    // Print the length of A and its elements
    cout << A.size() << endl;
    for (auto it = A.begin(); it != A.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
