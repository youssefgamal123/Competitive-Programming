#include <bits/stdc++.h>
using namespace std;
 
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (int i = 0; i < H; i++) cin >> grid[i];
 
    string target = "snuke";
 
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            // Try all 8 directions
            for (int d = 0; d < 8; d++) {
                int x = i, y = j;
                bool ok = true;
                vector<pair<int,int>> path;
                for (int k = 0; k < 5; k++) {
                    if (x < 0 || x >= H || y < 0 || y >= W) {
                        ok = false;
                        break;
                    }
                    if (grid[x][y] != target[k]) {
                        ok = false;
                        break;
                    }
                    path.push_back({x+1, y+1}); // 1-based indexing
                    x += dx[d];
                    y += dy[d];
                }
                if (ok) {
                    for (auto [r,c] : path) cout << r << " " << c << "\n";
                    return 0;
                }
            }
        }
    }
}