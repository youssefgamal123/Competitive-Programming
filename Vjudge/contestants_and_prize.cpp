#include <iostream>
#include <vector>
#include <queue>
#include <variant>


using namespace  std;

vector<vector<bool>> vis;
vector<vector<char>> grid;
vector<vector<int>> dis;
queue<pair<int,int>> ready;


int n , m;


int dr [4] = {1,-1,0,0};
int dc [4] = {0,0,1,-1};

void BFS() {

    while (!ready.empty()) {

        auto [r,c] = ready.front();

        ready.pop();

        for (int i = 0 ; i < 4;i++) {

            int nr = r + dr[i];
            int nc = c + dc[i];


            if (nr < 0 || nr >=  n || nc < 0 || nc>=m ) {
                continue;
            }

            if (vis[nr][nc]) {
                continue;
            }

            if (grid[nr][nc] == '#') {
                continue;
            }

            if (grid[nr][nc] == 'P') {
                cout << dis[r][c]+1;
                return;
            }

            vis[nr][nc] = true;
            ready.push({nr,nc});
            dis[nr][nc] = dis[r][c]+1;


        }




    }

    cout << "No paths found"<<endl;


}



int main () {



    cin>>n>>m;


    vis.resize(
        n,
        vector<bool>(m,false)

    );

    grid.resize(n,vector<char> (m));
    dis.resize(n,vector<int>(m,-1));


    for(int r = 0; r < n; r++)
    {
        for(int c = 0; c < m; c++)
        {
            cin >> grid[r][c];
        }
    }

    for (int r = 0 ; r < n ; r++) {
        for (int c = 0 ; c < m ;c++) {

            if (grid[r][c] == 'C') {
                ready.push({r,c});
                dis[r][c] =0;
                vis[r][c] = true;
            }


        }
    }


    BFS();




}