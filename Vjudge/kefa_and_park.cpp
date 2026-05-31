#include <iostream>
#include <vector>

using namespace std;

int n, m;

vector<int> cats;
vector<vector<int>> adj;

int answer = 0;

void dfs(int node, int parent, int consecutive) {

    // update consecutive cats
    if (cats[node] == 1)
        consecutive++;
    else
        consecutive = 0;

    // invalid path
    if (consecutive > m)
        return;

    bool isLeaf = true;

    for (int neighbour : adj[node]) {

        if (neighbour != parent) {

            isLeaf = false;

            dfs(neighbour, node, consecutive);
        }
    }

    // valid restaurant
    if (isLeaf)
        answer++;
}

int main() {

    cin >> n >> m;

    cats.resize(n + 1);
    adj.resize(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> cats[i];
    }

    for (int i = 0; i < n - 1; i++) {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, -1, 0);

    cout << answer;
}