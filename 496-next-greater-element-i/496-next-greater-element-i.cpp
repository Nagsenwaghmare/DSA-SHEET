class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        stack<int>s;
        map<int,int>mp;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<nums2[i]){
                s.pop();
            }
            if(s.empty())mp[nums2[i]]=-1;
            else mp[nums2[i]]=s.top();
            s.push(nums2[i]);
        }
        for(auto i:nums1){
            res.push_back(mp[i]);
        }
        return res;
    }
};