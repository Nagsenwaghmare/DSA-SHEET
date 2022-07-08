class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size() , n = mat[0].size();
        vector<vector<int>> vec(m+n,vector<int>());
        vector<int> v;
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                vec[i+j].push_back(mat[i][j]);
            }
        }
        for(int i = 0 ; i < vec.size() ; ++i)
        {
            if(i % 2 == 0)
                reverse(vec[i].begin(),vec[i].end());
            for(int j = 0 ; j < vec[i].size() ; ++j)
            {
                v.push_back(vec[i][j]);
            }
        }
        return v;
    }
};