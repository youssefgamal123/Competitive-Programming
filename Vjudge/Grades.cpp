#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Friend {
    string name;
    int A, M, S, E;
    int total;

    Friend(string n, int a, int m, int s, int e) {
        name = n;
        A = a; M = m; S = s; E = e;
        total = a + m + s + e;
    }

    bool operator<(const Friend &other) const {
        if (total != other.total)
            return total > other.total;
        return name < other.name;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<Friend> friends;

    for (int i = 0; i < N; i++) {
        string name;
        int a, m, s, e;
        cin >> name >> a >> m >> s >> e;
        friends.emplace_back(name, a, m, s, e);
    }

    sort(friends.begin(), friends.end());

    for (auto &f : friends) {
        cout << f.name << " " << f.total << " "
             << f.A << " " << f.M << " " << f.S << " " << f.E << "\n";
    }

    return 0;
}
