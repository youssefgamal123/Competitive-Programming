#include <iostream>
#include <vector>
using namespace  std;




vector <vector <int>>adj;
vector <int> subordinates;

int dfs (int u ) {

    int total =1 ;

    for (int v :  adj[u]) {
        total+= dfs(v);

    }

    subordinates[u]= total-1;
    return total;

}


int main () {



    int n ;
    cin>>n;
    adj.resize(n+1);
    subordinates.resize(n+1);


    for (int i = 2 ; i <= n  ; i++ ) {
        int boss;
        cin>>boss;
        adj[boss].push_back(i);
    }


    dfs(1);

    for (int i = 1 ; i < subordinates.size(); i++) {
        cout<<subordinates[i]<<" ";
    }





}