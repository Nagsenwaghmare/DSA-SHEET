class Solution {
public:
    int m,n;
    bool dfssearch(vector<vector<char>>&board,string word,int idx,int i,int j){
        if(i<0 || j<0 || i>=m || j>=n ||word[idx]!=board[i][j])return false;
        if(idx==word.size()-1)return true;
        char ch = board[i][j];
        board[i][j]='*';
        bool ans = (dfssearch(board,word,idx+1,i+1,j)||dfssearch(board,word,idx+1,i-1,j)||dfssearch(board,word,idx+1,i,j+1)||dfssearch(board,word,idx+1,i,j-1));
        board[i][j]=ch;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfssearch(board,word,0,i,j))return true;
            }
        }
        return false;
    }
};