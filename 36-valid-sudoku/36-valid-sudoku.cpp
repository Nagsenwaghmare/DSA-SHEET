
class Solution {
public:
bool isValidSudoku(vector<vector<char>>& ar) {

    for(int i=0;i<ar.size();i++)
        for(int j=0;j<ar.size();j++)
            if(ar[i][j] != '.'){
                for(int k=0;k<9;k++)
                    if( (i!=k && ar[k][j]==ar[i][j]) || (j!=k && ar[i][k]==ar[i][j]) )
                        return 0;
                for(int row=3*(i/3); row<3*(i/3)+3; row++)
                    for(int col=3*(j/3); col<3*(j/3)+3; col++)
                        if( (row!=i || col!=j) && ar[row][col]==ar[i][j])
                            return 0;
            }
    return 1;
}
};