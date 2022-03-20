class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>res;
        res.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==res[res.size()-1])continue;
            else{
                res.push_back(nums[i]);
            }
        }
        for(auto k:res){
            cout<<k<<" ";
        }
        int cnt =0;
        for(int i=1;i<res.size()-1;i++){
            if((res[i-1]>res[i] && res[i+1]>res[i])||(res[i-1]<res[i] && res[i+1]<res[i])){
                cnt++;
            }
        }
        return cnt;
    }
};