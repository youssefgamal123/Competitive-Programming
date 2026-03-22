#include <iostream>
#include <queue>
#include <vector>
using namespace std;


/*

In BFS you visit nodes level by level , for each node n you visit all it's adjacencies ,
that means that u are visiting all of the nodes in their level and then u move on to the next level and so on and fourth


u have a queue of the ready or upcoming nodes
you start from src and mark it as visited and then visit all it's adjacencies
and then mark them as visited and loop through each remaining node in the queue(the src adjacnecies)
and go visit all their adjacent nodes (the next level)



 */

vector<vector<int>> adj;
vector<bool> visited;

void BFS(int src) {
 queue<int> q;
 q.emplace(src);
 visited[src] = true;

 while (q.size()) {
  int u = q.front();
  q.pop();
  cout << u << " ";

  for (int v: adj[u]) {
   if (visited[v]) {
    continue;
   } else {
    q.emplace(v);
    visited[v] = true;
   }
  }
 }
}


int main () {




 int n = 5;

 adj.resize(n);
 visited.resize(n, false);

 // example graph
 adj[0] = {1, 2};
 adj[1] = {3};
 adj[2] = {4};

 BFS(0);







}


/*
 *
*#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> parent;

bool BFS(int src, int dst) {
    queue<int> q;
    q.push(src);
    visited[src] = true;
    parent[src] = -1;   // source has no parent

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (u == dst)
            return true;   // stop early if destination reached

        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    return false;  // destination not reachable
}

int main() {
    int n = 6;
    adj.resize(n);
    visited.resize(n, false);
    parent.resize(n, -1);

    // Example graph
    adj[0] = {1, 2};
    adj[1] = {3};
    adj[2] = {3, 4};
    adj[3] = {5};

    int src = 0;
    int dst = 5;

    if (BFS(src, dst)) {
        vector<int> path;

        // 🔁 Backtrack using while loop
        int current = dst;

        while (current != -1) {
            path.push_back(current);
            current = parent[current];
        }

        reverse(path.begin(), path.end());

        cout << "Shortest Path: ";
        for (int node : path)
            cout << node << " ";
    } else {
        cout << "No path found.";
    }

    return 0;
}
 */