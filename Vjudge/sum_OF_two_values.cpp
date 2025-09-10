#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long target;
    cin >> n >> target;

    vector<long long> arr(n);
    multiset<pair<long long,int>> ms;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ms.insert({arr[i], i});
    }

    for (int i = 0; i < n; i++) {
        long long need = target - arr[i];

        ms.erase(ms.find({arr[i], i}));

        auto it = ms.lower_bound({need, -1});
        if (it != ms.end() && it->first == need) {
            cout << i+1 << " " << it->second+1 << "\n";
            return 0;
        }

        ms.insert({arr[i], i});
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
