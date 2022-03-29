class Solution {
public:
    string backtrack(string s,int n,vector<string>&nums){
        if(s.size()==n){
            if(find(nums.begin(),nums.end(),s)==nums.end()) return s;
            else return "";
        }
        string k;
        
        s.push_back('1');
        k=backtrack(s,n,nums);
        if(k!="") return k;
        s.pop_back();
        
        s.push_back('0');
        k = backtrack(s,n,nums);
        if(k!="") return k;
        s.pop_back();
        
        return  "";
}
    string findDifferentBinaryString(vector<string>& nums) {

        string s = "";
        int n = nums[0].size();
        return backtrack(s,n,nums);
    }
};