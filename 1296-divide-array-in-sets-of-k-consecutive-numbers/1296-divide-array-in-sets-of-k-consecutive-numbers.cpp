class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(mp[i.first]>0){
                for(int j=k-1;j>=0;--j){
                    if((mp[i.first+j]-=mp[i.first])<0){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    // bool isPossibleDivide(vector<int> A, int k) {
    //     map<int, int> c;
    //     for (int i : A) c[i]++;
    //     for (auto it : c)
    //         if (c[it.first] > 0)
    //             for (int i = k - 1; i >= 0; --i)
    //                 if ((c[it.first + i] -= c[it.first]) < 0)
    //                     return false;
    //     return true;
    // }
};