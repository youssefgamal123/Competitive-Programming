// graph traversals and storage




#include <iostream>
#include <vector>
using namespace  std;



struct Edge {

    int FF, to , weight;


};

int main () {

    int n , m;  // n vertix , m edges

    // adjacency matrix


    cin>>n>>m;

    /*
    vector < vector <int>> adj (n+1,vector<int>(n+1,-1));
    for (int i = 0 , u ,v , w ; i<m ;i++ ) {

        cin >> u >>v >>w;

        adj[u][v] = w;
        adj[v][u] = w ; // directed graph


    }

*/
    // Adjacenecy List

    vector <vector <pair <int,int>>> adj(n+1);       // for weighted graph


    for (int i = 0 , u ,v , w ; i<m ;i++ ) {

        cin >> u >>v >>w;

        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w); // undirected graph

    }



    // edgeList

   vector<Edge>edgeList(m);

    for (auto &[u,v,w] : edgeList ) {
        cin>>u>>v>>w;

    }


}