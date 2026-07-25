#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <variant>


using namespace std;

int n  , m;

vector<int> visited;
vector<int> dist;
queue<int>nodes;


void bfs (int n) {

    nodes.push(n);
    visited[n] = true;
    dist[n] = 0;

    while (!nodes.empty()) {

        int curr = nodes.front();
        nodes.pop();


        if (curr == m ) {
            cout << dist[curr] <<endl;
        }


        if (curr < m && !visited[curr*2]) {

            visited[curr*2] = true;
            nodes.push(curr*2);
            dist[curr*2] = dist[curr]+1;
        }

        if (curr - 1 > 0 && !visited[curr - 1]) {

            visited[curr - 1] = true;

            dist[curr - 1] = dist[curr] + 1;

            nodes.push(curr - 1);
        }





    }




}



int main () {


    cin >> n >>m;

    if (n > m ) {
        cout <<n-m << endl;
        return 0;
    }

    visited.resize(2*m+5,false);
    dist.resize(2*m+5 , -1);



        bfs(n);



}