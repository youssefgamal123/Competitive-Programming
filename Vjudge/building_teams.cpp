#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;

vector<int> team;

bool possible = true;


void dfs(int node, int currentTeam) {

    team[node] = currentTeam;

    for (int neighbor : adj[node]) {

        // unvisited
        if (team[neighbor] == 0) {

            dfs(neighbor, 3 - currentTeam);
        }

        // same team conflict
        else if (team[neighbor] == currentTeam) {

            possible = false;
        }
    }
}


int main() {

    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);

    team.resize(n + 1, 0);

    for (int i = 0; i < m; i++) {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // graph may have multiple components
    for (int node = 1; node <= n; node++) {

        if (team[node] == 0) {

            dfs(node, 1);
        }
    }

    if (!possible) {

        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    for (int node = 1; node <= n; node++) {

        cout << team[node] << " ";
    }

    cout << endl;
}