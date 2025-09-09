#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    map<string, long long> person;

    for (int i = 0; i < n; i++) {
        string name;
        long long pounds;
        cin >> name >> pounds;
        person[name] = pounds;
    }

    while (q--) {
        int query;
        cin >> query;

        if (query == 1) {
            string x;
            long long money;
            cin >> x >> money;
            person[x] += money;
        } else {
            string x;
            cin >> x;
            cout << person[x] << "\n";
        }
    }

    return 0;
}
