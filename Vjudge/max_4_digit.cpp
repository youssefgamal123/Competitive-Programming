

#include <iostream>
#include <vector>

using namespace std;




int n ,m;
vector<vector<int>>grid;

vector<vector<bool>> vis;


int dr [4]= {1,-1,0,0};
int dc [4] = {0,0,1,-1};

int maxNumber = 0;

    void solve(int r, int c , int length,int number) {


        if (length ==4) {
            maxNumber = max (maxNumber , number);
            return;
        }

        for (int i = 0 ; i < 4 ;i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];


            if (nr < 0 || nr >=n || nc < 0 || nc >=m) {
                continue;;
            }

            if (vis[nr][nc] ) {
                continue;
            }


            vis[nr][nc] = true;
            solve(nr,nc,length+1,number*10 + grid[nr][nc]);

            vis[nr][nc] = false;



        }


    }











int main() {

    cin>>n>>m;
    grid.resize(
        n,

        vector<int>(m)

        );


    vis.resize(n,vector<bool>(m,false));


    for (int i = 0 ; i < n ; i++) {

        for (int c = 0 ; c<m ; c++) {
            cin>>grid[i][c];
        }


    }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                vis[i][j] = true;

                solve(i, j, 1, grid[i][j]);

                vis[i][j] = false;
            }
        }


        cout << maxNumber << endl;
}