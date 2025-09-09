
#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    set<int> lights;
    multiset<int> segments;

    lights.insert(0);
    lights.insert(x);
    segments.insert(x);

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;

        // find neighbors of p
        auto it = lights.upper_bound(p);
        int right = *it;
        int left = *prev(it);

        // remove old segment [left, right]
        segments.erase(segments.find(right - left));

        // add new segments [left, p], [p, right]
        segments.insert(p - left);
        segments.insert(right - p);

        // add light position
        lights.insert(p);

        // print the current maximum segment
        cout << *segments.rbegin() << " ";
    }

    cout << "\n";
}
