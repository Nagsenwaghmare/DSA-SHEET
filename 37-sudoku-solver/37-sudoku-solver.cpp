class Solution {
public:
    bool issafe(int i,int j,char n,vector<vector<char>>& board){
        int N = board.size();
        for(int k=0;k<N;k++){
            if((board[i][k]==(n)) || board[k][j]==(n)) return false;
        }
        int s = sqrt(N);
        int rs = i-(i%3);
        int cs = j-(j%3);
        for(int a=0;a<s;a++){
            for(int b=0;b<s;b++){
                if(board[rs+a][cs+b]==n) return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        int N = board.size();
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(board[i][j]=='.'){
                    for(char n='1';n<='9';n++){
                        if(issafe(i,j,n,board)){
                            board[i][j] =n;
                            if(solve(board)) return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                } 
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
        //return board;
    }
};