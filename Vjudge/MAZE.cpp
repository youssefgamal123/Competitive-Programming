#include <iostream>
#include <vector>
using namespace std;

int n , m , k;


vector<vector<char>>grid;
vector<vector<bool>> visited;
vector<pair<int,int>> cells;
int dr [4] = {1,-1,0,0};
int dc [4] = {0,0,1,-1};



   void dfs (int r , int c , vector<vector<char>> & grid) {

      visited[r][c]= true;

      cells.push_back( {r,c});

      for (int i = 0 ; i < 4 ;i++) {

         int nr = r+dr[i];
         int nc = c + dc[i];



         if (nr<0 || nr >=n || nc <0 || nc >=m) {
            continue;
         }
         if (visited[nr][nc]) continue;

         if (grid[nr][nc] == '#') {
            continue;
         }




         else {

            dfs(nr,nc,grid);
         }



      }




   }





int main () {


   cin>>n>>m>>k;

   grid.resize(n , vector<char> (m) );
   visited.resize(n,vector<bool>(m));


   for(int r =0 ; r< n ;r++) {

   for (int c = 0 ; c < m ;c++) {

      cin>>grid[r][c];


   }

   }


      for (int r = 0; r < n; r++) {

         for (int c = 0; c < m; c++) {

            if (grid[r][c] == '.') {

               dfs(r,c,grid);

               r = n;
               break;
            }
         }
      }

      for (int i = cells.size() - 1; i >= (int)cells.size() - k; i--) {

         int r = cells[i].first;
         int c = cells[i].second;

         grid[r][c] = 'X';
      }




      for(int r =0 ; r< n ;r++) {

         for (int c = 0 ; c < m ;c++) {

            cout <<grid[r][c];


         }
         cout << endl;
      }









}