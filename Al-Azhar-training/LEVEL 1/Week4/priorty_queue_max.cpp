#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;

    multiset<int, greater<int>> nums; // Use multiset with greater comparator for descending order

    string query;
    int x;

    while (q--) {
        cin >> query;

        if (query == "push") {
            cin >> x;
            nums.insert(x);
        } else if (query == "pop") {
            nums.erase(nums.begin()); // Remove the greatest element
        } else if (query == "top") {
            cout << *nums.begin() << endl; // Print the greatest element
        }
    }

    return 0;
}
