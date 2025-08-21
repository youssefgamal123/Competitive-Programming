#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;

    set<int> mySet;

    while (q--) {
        string query;
        int x;
        cin >> query >> x;

        if (query == "insert") {
            mySet.insert(x);
        } else if (query == "find") {
            if (mySet.find(x) != mySet.end()) {
                cout << "found" << endl;
            } else {
                cout << "not found" << endl;
            }
        } else if (query == "lower_bound") {
            auto it = mySet.lower_bound(x);
            if (it != mySet.end()) {
                cout << *it << endl;
            } else {
                cout << -1 << endl;
            }
        } else if (query == "upper_bound") {
            auto it = mySet.upper_bound(x);
            if (it != mySet.end()) {
                cout << *it << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
