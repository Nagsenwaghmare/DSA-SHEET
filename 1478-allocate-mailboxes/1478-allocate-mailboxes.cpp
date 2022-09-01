class Solution {
public:
    int dp[101][101][101] = {};
int dfs(vector<int>& h, int i, int j, int k) {
    if (i >= h.size() || k <= 0)
        return i == h.size() && k == 0 ? 0 : INT_MAX;
    if (dp[i][j][k])
        return dp[i][j][k];
    dp[i][j][k] = dfs(h, i + 1, i + 1, k - 1); // New neighborhood
    if (dp[i][j][k] != INT_MAX)
        for (auto p = j; p <= i; ++p)
            dp[i][j][k] += abs(h[(i + j) / 2] - h[p]);        
    return dp[i][j][k] = min(dp[i][j][k], dfs(h, i + 1, j, k)); // Continue neighborhood
}
int minDistance(vector<int>& houses, int k) {      
    sort(begin(houses), end(houses));
    return dfs(houses, 0, 0, k);
}
};