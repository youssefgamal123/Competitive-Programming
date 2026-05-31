#include <iostream>
#include <vector>
using namespace std;

int n , m ;

vector<vector<char>>grid;

vector<vector<bool>> visited;

bool flag = false;

int dr [4] = {1,-1,0,0};
int dc [4] = {0,0,1,-1};


void dfs (int r , int c , int pr , int pc , char color ) {


    visited[r][c] = true;

    for (int i = 0 ; i< 4 ;i++) {

        int newr =  r+dr[i];
        int newc = c+dc[i];

        if (newr  < 0 || newr >= n || newc < 0 || newc >=m) {
            continue;
        }
        if (grid[newr][newc] != color) {
            continue;
        }
        if (visited[newr][newc]) {

            if (! (newr == pr && newc ==pc )) {
                flag = true;
            }
        }

        else {
            dfs(newr, newc, r , c ,color);
        }





    }






    }







int main () {


    cin>>n>>m;

    grid.resize(n,vector<char>(m) );
    visited.resize(
        n,
        vector<bool>(m,false)

        )
    ;


    for (int r  = 0 ; r< n ; r++) {

        for (int c = 0 ; c< m ; c++) {

            cin>>grid[r][c];

        }


    }

    for (int r  = 0 ; r< n ; r++) {

        for (int c = 0 ; c< m ; c++) {

            if (!visited[r][c]) {
                dfs(r,c,-1,-1,grid[r][c]);
            }

        }


    }






        if (flag) {
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }




    return 0;

}