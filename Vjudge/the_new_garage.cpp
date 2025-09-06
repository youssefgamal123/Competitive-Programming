#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    stack<int> st;
    int nextCar = 1; // next car to enter
    for (int i = 0; i < n; i++) {
        int wantToLeave = sequence[i];

        // keep pushing cars until we can pop the desired one
        while ((st.empty() || st.top() != wantToLeave) && nextCar <= n) {
            st.push(nextCar);
            nextCar++;
        }

        // if top is the car we want, pop it
        if (!st.empty() && st.top() == wantToLeave) {
            st.pop();
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
