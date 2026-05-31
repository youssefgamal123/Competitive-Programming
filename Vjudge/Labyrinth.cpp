#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;

queue<pair<int, int>> Nodes_ready_to_process;

vector<vector<bool>> visited;
vector<vector<char>> grid;
vector<vector<int>> dist;

int dr[4] = {1, -1, 0, 0};
int dc[4] = {0, 0, 1, -1};

void BFS(int sr, int sc) {

    Nodes_ready_to_process.push({sr,sc});
    visited[sr][sc]= true;

    dist[sr][sc] =0;



    while (!Nodes_ready_to_process.empty()) {

        auto [r,c] = Nodes_ready_to_process.front();
        Nodes_ready_to_process.pop();

        for (int i = 0; i  < 4 ;i++) {

            int nr = r +dr[i];
            int nc = c +dc[i];

            if (nr<0 || nr >= n || nc < 0 || nc >=m) {
                continue;
            }

            if (grid[nr][nc] == '#') {
                continue;
            }

            if (visited[nr][nc]) {
                continue;
            }

            Nodes_ready_to_process.push({nr,nc});
            visited[nr][nc] = true;
            dist[nr][nc] = dist[r][c] +1;

            if (grid[nr][nc] == 'B') {
                cout << "YES\n";
                cout << dist[nr][nc] << "\n";

                return;
            }






        }






    }



    cout <<"NO";



}

int main() {

    cin >> n >> m;

    visited.resize(
        n,
        vector<bool>(m, false)
    );

    grid.resize(
        n,
        vector<char>(m)
    );

    dist.resize(
        n,
        vector<int>(m, -1)
    );



    for (int r = 0; r < n; r++) {

        for (int c = 0; c < m; c++) {

            cin >> grid[r][c];


        }
    }


    for (int r = 0; r < n; r++) {

        for (int c = 0; c < m; c++) {

           if (grid[r][c] == 'A') {
               BFS(r,c);
           }


        }
    }

}