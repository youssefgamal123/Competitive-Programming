#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int N = 100005; // Maximum number of vertices

vector<int> adj[N];
char studentType[N];

int dfs(int u, int parent, map<int, int>& cnt) {
    int totalWalls = 0;
    for (int v : adj[u]) {
        if (v != parent) {
            int walls = dfs(v, u, cnt);
            cnt[u] += cnt[v];
            totalWalls += walls;
        }
    }

    if (studentType[u] == 'P') {
        cnt[u]++;
        totalWalls++;
    } else if (studentType[u] == 'S') {
        cnt[u]--;
        totalWalls--;
    }

    return abs(totalWalls);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
            cnt[i] = 0;
        }

        for (int i = 2; i <= n; ++i) {
            int parent;
            cin >> parent;
            adj[parent].push_back(i);
        }

        cin >> studentType + 1;

        map<int, int> cnt;
        int minWalls = dfs(1, 0, cnt);

        cout << minWalls << endl;
    }

    return 0;
}
