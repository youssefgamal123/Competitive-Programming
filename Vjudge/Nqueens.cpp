class Solution {
public:

    bool canPlace(vector<string> &board, int row, int col, int n){

        for (int j = 0 ; j<n ; j++){
            if(board[row][j] == 'Q'){
                return false;
            }
        }

        for(int i=0; i<n; i++){
            if(board[i][col] == 'Q'){
                return false;
            }
        }

        // left diagonal
        for(int i=row, j=col; i>=0 && j>=0; i--,j--){
            if(board[i][j] == 'Q'){
                return false;
            }
        }

        // right diagonal
        for(int i=row, j=col; i>=0 && j<n; i--,j++){
            if(board[i][j] == 'Q'){
                return false;
            }



        }

        return true;

    }
    void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {

        // base case

        if (row == n){
            ans.push_back(board);
            return;
        }


        for (int i = 0 ; i<n;i++){

            if (canPlace(board,row,i,n)){
                board[row][i] = 'Q';      // do
                nQueens(board, row+1, n, ans);      // recurcnse
                board[row][i] = '.';            // undo

            }

        }



    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));

        nQueens(board, 0, n, ans);
        return ans;

    }







};