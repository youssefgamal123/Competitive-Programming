#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
int farthestNode;
int maxDist;

void dfs(int u, int parent, int depth) {
    if (depth > maxDist) {
        maxDist = depth;
        farthestNode = u;
    }

    for (int v : adj[u]) {
        if (v == parent) continue;  // avoid going back
        dfs(v, u, depth + 1);
    }
}

int main() {
    int n;
    cin >> n;

    adj.resize(n + 1);

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // First DFS
    maxDist = -1;
    dfs(1, 0, 0);

    int A = farthestNode;

    // Second DFS
    maxDist = -1;
    dfs(A, 0, 0);

    cout << maxDist << endl;
}