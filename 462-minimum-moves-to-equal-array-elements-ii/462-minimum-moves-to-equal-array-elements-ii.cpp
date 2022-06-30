class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int moves = 0;
        for(int i=0;i<n;i++){
            moves+=(abs(nums[n/2]-nums[i]));
        }
        return moves;
    }
};