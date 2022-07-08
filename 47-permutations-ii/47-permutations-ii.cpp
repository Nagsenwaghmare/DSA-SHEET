//backtracking using hashmaps.

class Solution {
public:
    unordered_map<int,int> mp;  //to store freqency of all unique elements.
    vector<vector<int>> ans;    // to store all permutations once formed.
    vector<int> curr;           //curr is empty initially, and is formed step by step 
                                //one all elements are used in curr, it is pushed in ans.
    void permutations(int idx,vector<int>& nums){
        int n=nums.size();
        
        if(idx==n){                //all elements are used then push it in ans array.
            ans.push_back(curr);
            return;
        }
        
        for(auto &k: mp){
            int key=k.first;    //the element.
            int val=k.second;   //its frequency.
            
            if(val==0) continue;    // val==0 means this element is used completely
                                    // and cannot be further use.
            curr.push_back(key);mp[key]--;  //else use this element and form a permutation.
            permutations(idx+1,nums);       
            curr.pop_back();mp[key]++;      // pop back so as to leave no trail of previous
        }                                   // permutations formed.
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        for(auto &k: nums) mp[k]++; //storing frequency of elements.
        permutations(0,nums);
        
        return ans; 
    }
};