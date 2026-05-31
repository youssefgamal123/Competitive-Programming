#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>



using namespace std;


vector<int> distances;
vector<vector<int>> adjlist;
vector<bool> visited;
vector<int>parent;


queue<int>Ready_to_process;

vector<int> path;

    void getpath(int dst) {

        int curr = dst;

        while (curr!=-1) {
            path.push_back(curr);
            curr = parent[curr];
        }


        reverse(path.begin(),path.end());



    }


    void BFS(int start , int distanation) {

        Ready_to_process.push(start);
        visited[start] = true;
        distances[start] = 0;

        while (!Ready_to_process.empty()) {

            int currnode = Ready_to_process.front();
            Ready_to_process.pop();

            for (int nghbr : adjlist[currnode]) {

              if (visited[nghbr]) {
                  continue;
              }

              Ready_to_process.push(nghbr);
                visited[nghbr]= true;
                distances[nghbr] = distances[currnode]+1;
                parent[nghbr] = currnode;

            }
        }




        if (!visited[distanation]) {
            cout<<"IMPOSSIBLE";
        }
        else {
            getpath(distanation);
            cout<<path.size()<<endl;;
            for (int i = 0 ; i < path.size(); i++) {
                cout << path[i]<<" ";
            }



        }






    }



int n ,m;

int main () {

    cin>>n>>m;


    adjlist.resize(n+1,{});
    visited.resize(n+1,false);
    distances.resize(n+1,-1);
    parent.resize(n+1,-1);

    for (int i  = 0 ; i < m ; i++) {

        int u ,v ;
        cin>>u>>v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);

    }


    BFS(1,n);







}