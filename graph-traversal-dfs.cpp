#include <iostream>
#include <vector>
using namespace std;



vector<vector <int>> adj;
vector<bool> visted;


void dfs (int u ) {

    visted[u] = true;
   // cout << u << ' ';
    // For each neighbor v of u, if v is not visited, go to v.
    for (int v  : adj[u]) {

        if (not visted[v]) {
            dfs(v);
        }

    }


}


// trees have no cycles so you don't need visted arrays .. however you should prevent urself from reaching to parent and going back and fouth for infinity


void dfsTree(int node , int parent) {
    cout <<node;
    for ( int v : adj[node]) {
        if (v == parent) {
            continue;
        }
        dfsTree(v,node);
    }
}


int main () {


        // n nodes, m edges  , m can =  n(n-1)/2 , in trees they are n-1 edges
     int n , m ;
    cin>>n>>m;
    adj.resize(n+1,{});
    visted.resize(n+1,false);

    for (int i = 0  , u , v ; i <m ;i++ ) {

        cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);      // unidrected graph

    }

    int res=0;
        // count connected compononents
    for (int i = 1 ; i<= n ; i++) {
        if (visted[i]) continue;;
        res++;
        dfs(i);
    }



    cout << res;



}