class Solution {
public:
    static bool cmp(int a,int b){
        string p = to_string(a);
        string q = to_string(b);
        return p+q>q+p;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        string str = "";
        for(auto i:nums){
            str+=to_string(i);
        }
        if(count(str.begin(),str.end(),'0')==str.size())return "0";
        return str;
    }
};