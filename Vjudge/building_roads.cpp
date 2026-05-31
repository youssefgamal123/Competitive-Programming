#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>>adjlist;
vector<bool> visited;
vector<int>rep;



    void dfs (int n) {

        visited[n] = true;

        for (int ad : adjlist[n]) {
            if (visited[ad]){

                continue;

            }

            dfs(ad);
        }


    }



int main () {
    int n ,m;
    cin>>n>>m;

    adjlist.resize(n+1);

    visited.resize(n+1,false);


    for (int i = 0 ; i < m; i++) {

        int  u  ,v;

        cin>>u>>v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);


    }


    for (int node =1 ; node <= n ; node++) {


        if (!visited[node]) {
            rep.push_back(node);
            dfs(node);
        }

    }

        cout << rep.size() - 1 << endl;


        for (int i = 0; i < rep.size() - 1; i++) {

            cout << rep[i] << " " << rep[i + 1] << endl;
        }

}