#include <iostream>
#include <vector>
#include <queue>


using namespace std;


vector<bool> visited;
vector<vector<int>> adjlist;

queue <int>processnodes;

int n , m;


/*

    push source
    mark visited;
    pop it
    visit all neughbours
    if visited
    continue

    if not visited
    push them into the queue
    mark them vistied


 */

void BFS (int source ) {


    processnodes.push(source);
    visited[source] = true;


   while (!processnodes.empty()) {

       int currnode = processnodes.front();
       processnodes.pop();

       cout << currnode <<" ";
       for (int neighbours : adjlist[currnode]) {


           if (visited[neighbours]) {
               continue;
           }

           visited[neighbours]= true;
           processnodes.push(neighbours);

       }





   }



}



int main () {


    cin>>n>>m;


    visited.resize(n+1,false);
    adjlist.resize(n+1,{});


    for (int i = 0 ; i <m ;i++) {

        int u ,v;

        cin>>u>>v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }




        BFS(1);



}


