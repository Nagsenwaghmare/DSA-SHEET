class Solution {
public:
    pair<int,int> getPair(int x){
        int five = 0, two = 0;
        while(x % 5 == 0){
            five++; x /= 5;
        }
        while(x % 2 == 0){
            two++; x /= 2;
        }
        return {five,two};
    } 
    int maxTrailingZeros(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size(), ans = 0;
        vector<vector<pair<int,int>>>top(r, vector<pair<int,int>>(c,{0,0})), left(r, vector<pair<int,int>>(c,{0,0}));
        
        //top[i][j] will store sum of exponent of 5's and 2's from grid[0][j] to grid[i][j]
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(i == 0){
                    top[i][j] = getPair(grid[i][j]);
                }
                else{
                    pair<int,int>p = getPair(grid[i][j]);
                    top[i][j].first = top[i-1][j].first + p.first;
                    top[i][j].second = top[i-1][j].second + p.second;
                }
            }
        }
        //left[i][j] will store sum of exponent of 5's and 2's from grid[i][0] to grid[i][j]
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(j == 0){
                    left[i][j] = getPair(grid[i][j]);   
                }
                else{
                    pair<int,int>p = getPair(grid[i][j]);
                    left[i][j].first = left[i][j-1].first + p.first;
                    left[i][j].second = left[i][j-1].second + p.second;
                }
            }
        }
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                pair<int,int>down, right;
                pair<int,int>curr = getPair(grid[i][j]);
                
                down.first = top[r-1][j].first - top[i][j].first, down.second = top[r-1][j].second - top[i][j].second;
                right.first = left[i][c-1].first - left[i][j].first, right.second = left[i][c-1].second - left[i][j].second;
                                
                //four cases ---> (down,left), (down,right), (top,left), (top,right)
                ans = max(ans, min(down.first + left[i][j].first, down.second + left[i][j].second));
                ans = max(ans, min(down.first + right.first + curr.first, down.second + right.second + curr.second));
                ans = max(ans, min(top[i][j].first + left[i][j].first - curr.first, top[i][j].second + left[i][j].second - curr.second));
                ans = max(ans, min(top[i][j].first + right.first, top[i][j].second + right.second));
            }
        }
        return ans;
    }
};