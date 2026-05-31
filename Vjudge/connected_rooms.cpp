#include <iostream>
#include <vector>
using namespace std;

int n, m;

vector<vector<char>> grid;

vector<vector<bool>> visited;

/*

    for the directions we can have
    up as r+1 , c
    down as r-1 , c
    right as r , c+1
    left as r , c-1

    so we can have dr = {1 -1 0 0 }
                        up down left right

    and dc as = {0 , 0, 1 -1 }
                up down left right


 */



int dr[4] = {1, -1, 0, 0};
int dc[4] = {0, 0, 1, -1};


 void dfs(int r , int c) {


     visited[r][c] = true;

     for (int i = 0 ; i< 4 ; i++ ) {


         int nr = r+ dr[i]; // new row
         int nc = c + dc[i];  // new col


         if (nr <0 || nr >=n || nc < 0 || nc >=m) {
             continue;
         }

         if (grid[nr][nc] == '#') {
             continue;
         }



         if (visited[nr][nc]) {
             continue;
         }

         dfs(nr,nc);



     }







 }



int main () {



    cin>>n>>m;

    grid.resize(n,

    vector<char>(m)
    );

 /*

    or we can have grid as vector<string> grid
    and take input

    for (int --- n){
    cin >> grid[i

    }


  */


    for (int i = 0 ; i < n ; i++) {

      for (int j = 0 ; j < m ; j++) {

          cin>>grid[i][j];

      }


    }


    visited.resize(n, vector<bool>(m, false));


    // loop on every thing on the grid , once we find a possible room
    // we dfs and get all connected components of this room to be marked
    // in dfs we move with the provided directions on the grid taking care with the edge cases

     int rooms  = 0;

    for (int r = 0 ; r < n ;r++) {

        for (int c = 0 ; c< m ; c++) {


            if (grid[r][c] == '.'  && !visited[r][c]) {
                rooms++;
                dfs(r,c); // from here we go find all connected componots of this room so that we can mark it as a whole connected component


            }


        }


    }









cout <<rooms<<endl;

}