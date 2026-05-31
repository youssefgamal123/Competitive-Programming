#include <iostream>
#include<vector>
using namespace std;


int n , m;

vector<bool>visited;
vector<vector<int>> adjlist;

int cycliccomponents = 0;


    void dfs (int node , int parent) {

        visited[node] = true;

        for (int neughbour  : adjlist[node ]) {

            if (visited[neughbour]) {

                if (neughbour == parent) {
                    cycliccomponents++;
                }
            }

            if (!visited[neughbour]) {
                dfs(neughbour,node);
            }



        }



    }


int main() {


        cin>>n>>m;
        adjlist.resize(n+1);
        visited.resize(n+1,false);

        for (int i = 0 ; i < m ;i++) {

            int u ,v;

            cin>>u>>v;

            adjlist[u].push_back(v);
            adjlist[v].push_back(u);

        }

    dfs(1,-1);



cout <<cycliccomponents<<endl;





}