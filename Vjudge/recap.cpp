#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <variant>


using namespace std;

int n  , m;

vector<int>vis;
vector<vector<int>> adjlist;
queue<int> nodes;
vector<int> parent;

vector<int> dis;

    void BFS(int src, int destination) {

        nodes.push(src);
        vis[src] = true;
        dis[src]=0;
        while (!nodes.empty()) {

          int currnode = nodes.front();
           nodes.pop();

            for (int nghbor : adjlist[currnode]) {

                if (vis[nghbor]) {
                    continue;
                }

                nodes.push(nghbor);
                vis[nghbor]=  true;
                dis[nghbor] = dis[currnode]+1;
                parent[nghbor] =currnode;
            }


        }


    if (vis[destination]) {
        cout <<" Path found "<<endl;
        cout <<"shortest distance is " << dis[destination];

        // path


        int curr = destination;
        vector<int> path (n+1);
        while (curr!=-1) {
            path.push_back(curr);
            curr = parent[curr];
        }


        reverse(path.begin(),path.end());
        // print it

    }



    }




int main () {

    cin>>n>>m;

    adjlist.resize(n+1,{});
     vis.resize(n+1,false);
     dis.resize(n+1,-1);
      parent.resize(n+1,-1);

    for (int i   = 0 ; i < m ; i++) {
        int u , v;
        cin>>u>>v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }


    BFS(1);






}


