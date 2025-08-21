#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> socks(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        cin >> socks[i];
    }

    set<int> table;
    int maxOnTable = 0;

    for (int i = 0; i < 2 * n; ++i) {
        if (table.count(socks[i]) == 1) {
            // Pair is on the table, remove both socks from the table
            table.erase(socks[i]);
        } else {
            // Pair is not on the table, put the sock on the table
            table.insert(socks[i]);
            maxOnTable = max(maxOnTable, static_cast<int>(table.size()));
        }
    }

    cout << maxOnTable << endl;

    return 0;
}
