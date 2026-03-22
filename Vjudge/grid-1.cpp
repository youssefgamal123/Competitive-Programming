#include <iostream>
#include <vector>
#include <cstring>
using namespace  std;


long long memo[1005][1005];
int H,W;
vector<vector<char>> grid;
long long MOD = 1e9+7;
long long solve(int i, int j) {

    if(i >= H || j >= W) return 0;

    if(grid[i][j] == '#') return 0;

    if(i == H-1 && j == W-1) return 1;

    if(memo[i][j] != -1) return memo[i][j];

    long long right = solve(i, j+1);
    long long down = solve(i+1, j);

    return memo[i][j] = (right + down) % MOD;
}



int main() {

    cin>>H>>W;
    grid.resize(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }



    memset(memo, -1, sizeof(memo));

  cout<<  solve(0,0);



}