#include <bits/stdc++.h>
using namespace std;



vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> rank;
        for(int i=0; i<nums.size(); ++i) rank.push_back(i);
        
        sort(rank.begin(), rank.end(), [&](int a, int b){return nums[a] > nums[b];});
        vector<string> ranks(nums.size());
        
        for(int i=3; i<nums.size(); ++i){
            ranks[rank[i]] = std::to_string(i+1);
        }
        
        if(nums.size() > 0) ranks[rank[0]] = "Gold Medal";
        if(nums.size() > 1) ranks[rank[1]] = "Silver Medal";
        if(nums.size() > 2) ranks[rank[2]] = "Bronze Medal";
        
        return ranks;
    }