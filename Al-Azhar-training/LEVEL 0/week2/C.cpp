#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    int s, n;
    cin >> s >> n;

    // Create an array of pairs to store dragon information
    pair<int, int> dragons[n];

    // Read dragon strength and bonus for defeating it
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    // Sort dragons based on their strength in ascending order
    sort(dragons, dragons + n);

    // Check if Kirito can defeat all dragons
    for (int i = 0; i < n; ++i) {
        if (s > dragons[i].first) {
            // Kirito defeats the dragon and gets a bonus
            s += dragons[i].second;
        } else {
            // Kirito cannot defeat the dragon
            cout << "NO\n";
            return 0;
        }
    }

    // If Kirito can defeat all dragons, print "YES"
    cout << "YES\n";

    return 0;
}
