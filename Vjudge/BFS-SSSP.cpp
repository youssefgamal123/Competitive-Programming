
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int n ,m;

vector<bool> visited;
vector<vector<int>> adjlist;
queue<int>Ready_to_process;
vector<int> parent(n + 1, -1);
vector <int> distance(n+1,-1);


    void BFS(int source, int destination) {


        visited[source]=true;
        Ready_to_process.push(source);
        distance[source]=0;


        while (!Ready_to_process.empty()) {

            int currnode = Ready_to_process.front();
            Ready_to_process.pop();

            for (int neughbour : adjlist[currnode]) {

                if (visited[neughbour]) {
                    continue;
                }

                visited[neughbour]= true;
                distance[neughbour] = distance[currnode]+1;
                parent[neughbour] = currnode;
                Ready_to_process.push(neughbour);

            }

            if (!visited[destination]) {
                cout <<"no paths found"
            }
            else {
                cout <<"shortest distance to this path"
                + distance[destination];
            }


        }

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




    }





int main () {


    cin>>n>>m;

    adjlist.resize(n+1,{});
    visited(n+1,false);


    for (int  i = 0 ; i < m ;i++) {

        int  u ,v;

        cin>>u>>v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }


    BFS(1,n);



}