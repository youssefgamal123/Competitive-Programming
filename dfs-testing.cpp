#include <iostream>
#include <vector>

using namespace std;



vector<vector<int>> adj;
vector<bool> visited;



void dfs (int node ) {

    visited[node]= true;
    cout << node << " ";
    for (int adjnode  : adj[node] ) {
        if (!visited[adjnode] ) {
            dfs(adjnode);
        }
    }



}


int main () {


    int nodes , edges;

    cin >> nodes >> edges;      // number 3adad

    adj.resize(nodes+1);
    visited.resize(nodes+1, false);

    for (int i = 0 ; i < edges ; i++) {
        int n , adjcentNode;
        cin >> n >> adjcentNode;
        adj[n].push_back(adjcentNode);
        adj[adjcentNode].push_back(n);
    }

    dfs(1);
    return 0;









}