
#include <iostream>
#include <vector>
using namespace  std;


// count connected  n components using dfs and ans = 2^n-1

vector<vector<int>> adjlist;

vector<bool> visited;


    void dfs (int i ) {

        visited[i] = true;

        for (int neghbour : adjlist[i]) {

            if (!visited[neghbour]) {
                dfs(neghbour);
            }


        }


    }




int main () {



    int n , m;
    cin>>n>>m;

    adjlist.resize(n+1);
    visited.resize(
    n+1,
    false

    );


    for (int  i = 0 ; i < m ; i++) {

        int  u , v;
        cin>>u >>v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);


    }


    int components = 0;


    for (int i =1 ; i<=n ;i++) {




        if (!visited[i]) {
            components++;
            dfs(i); // marks all connected componenets or neughbours to it as visited so that we concldue a connected componenet

        }



    }


        long long answer = 1LL << (n - components);

        cout << answer;


}