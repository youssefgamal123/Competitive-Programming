#include <iostream>
#include <vector>
using namespace std;






int ans = 0;
bool col[8], diag1[15], diag2[15];
vector<string> board(8);


void solve(int row ) {

    if (row == 8) {
        ans++;
        return;     // base case
    }

    for (int c =0 ; c<8 ; c++) {

        if (board[row][c] == '*' ) continue;
        if (col[c] || diag1[row + c] || diag2[row - c + 7]) continue;  // diagonal and cell checks

        col[c] = diag1[row + c] = diag2[row - c + 7] = true; // take col and diagonals
        solve(row+1);
        col[c] = diag1[row + c] = diag2[row - c + 7] = false;
    }


}

int main () {
    for (int i = 0; i < 8; i++) cin >> board[i];
    solve(0);
    cout << ans << "\n";
    return 0;



}
