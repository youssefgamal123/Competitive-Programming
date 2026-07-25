class Solution {
public:


    vector<vector<bool>> vis;
    int dr[4] = {1,-1,0,0};
    int dc [4] = {0,0,1,-1};


    int premiter = 0;


    void dfs(int r , int c , vector<vector<int>> board){

        vis[r][c]=true;

        for (int counter = 0 ; counter < 4 ; counter++){

            int nr = r +dr[counter];
            int nc = c + dc[counter];


            if (nr <0 || nr >= board.size() || nc < 0 ||nc >= board[0].size()  ){
                premiter++;
            }

            if (board[nr][nc] == '0'){
                premiter++;
            }


            if (vis[nr][nc]){
                continue;
            }


            dfs(nr,nc,board);



        }
    }




    int islandPerimeter(vector<vector<int>>& grid) {

        vis.resize(grid.size(),
        vector<bool>(grid[0].size() , false)

        ) ;


        for (int r =0 ; r<grid.size();r++){
            for (int c = 0 ; c < grid[r].size();c++){

                if (grid[r][c] == '1'){


                    dfs(r,c,grid);
                }


            }
        }


        return premiter;

    }
};