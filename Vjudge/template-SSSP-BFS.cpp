#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> adjlist;

int n, m;
vector<bool> visited(n + 1, false);

// shortest distance from source
vector<int> dist(n + 1, -1);

// who discovered me
vector<int> parent(n + 1, -1);

queue<int> q;


void BFS_SSSP(int source, int destination) {



    q.push(source);

    visited[source] = true;

    dist[source] = 0;

    while (!q.empty()) {

        int currnode = q.front();
        q.pop();

        for (int neighbor : adjlist[currnode]) {

            if (visited[neighbor]) {
                continue;
            }

            visited[neighbor] = true;

            // shortest distance transition
            dist[neighbor] = dist[currnode] + 1;

            // save path information
            parent[neighbor] = currnode;

            q.push(neighbor);
        }
    }

    // destination unreachable
    if (!visited[destination]) {

        cout << "No path exists\n";
        return;
    }

    cout << "Shortest Distance = "
         << dist[destination]
         << "\n";

    // reconstruct path
    vector<int> path;

    int cur = destination;

    while (cur != -1) {

        path.push_back(cur);

        cur = parent[cur];
    }

    reverse(path.begin(), path.end());

    cout << "Path: ";

    for (int node : path) {
        cout << node << " ";
    }

    cout << "\n";
}

int main() {

    cin >> n >> m;

    adjlist.resize(n + 1);

    for (int i = 0; i < m; i++) {

        int u, v;
        cin >> u >> v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    int source = 1;
    int destination = n;

    BFS_SSSP(source, destination);
}


/*

The Three Arrays Cheat Sheet
visited[node]
=
Have I already discovered this node?

dist[node]
=
Shortest distance from source to node.

parent[node]
=
Who discovered this node?
Used to reconstruct the shortest path.

And the four BFS lines you'll see in almost every SSSP solution are:

visited[neighbor] = true;
dist[neighbor] = dist[currnode] + 1;
parent[neighbor] = currnode;
q.push(neighbor);

Those four lines are basically the entire algorithm