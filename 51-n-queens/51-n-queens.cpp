class Solution {
public:
    vector<vector<string>> res;
    bool isSafe(vector<string> &board, int x, int y){
        for(int row = 0; row < x; row++){
            if(board[row][y] == 'Q'){
                return false;
            }
        }
        int row = x;                             //for upper left diagonal
        int col = y;
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
            col--;
        }
        row = x;                                //for upper right diagonal
        col = y;
        while(row >= 0 && col < board.size()){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
            col++;
        }
        return true;
    }
    void NQueen(vector<string> &board, int x){
        if(x == board.size()){
            res.push_back(board);
            return;
        }
        for(int col = 0; col < board.size(); col++){
            if(isSafe(board,x,col)){
                board[x][col] = 'Q';
                
                NQueen(board,x+1);
                board[x][col] = '.';                //backtracking
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        if(n <= 0){
            return {{}};
        }
        vector<string> board(n,string(n,'.'));
        NQueen(board,0);
        //  for(int i=0;i<n;i++){
        // for(int j=0;j<n;j++){
        //     cout<<res[i][j]<<" ";
        // }
        // cout<<"\n";
        return res;
     }
        
};

