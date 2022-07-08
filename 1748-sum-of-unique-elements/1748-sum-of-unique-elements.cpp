class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>s;
        for(auto i:nums){
            s[i]++;
        }
        int sum=0;
        for(auto i:s){
            if(i.second==1){
                sum+=i.first;
            }
        }
        return sum;
    }
};