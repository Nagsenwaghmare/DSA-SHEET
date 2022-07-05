class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int>st;
        for(auto i:nums){
            st.insert(i);
        }
        vector<int>res;
        for(auto i:st){
            res.push_back(i);
        }
        if(st.size()==0)return 0;
        if(st.size()==1)return 1;
        if(st.size()==2){
            if(abs(res[1]-res[0])==1)return 2;
            else return 1;
        }
        
        int i=0;
        int j=0;
        int n = res.size();
        int maxi = INT_MIN;
        for(auto k:res){
            cout<<k;
        }
        while(i<n-1 ){
            if(res[j+1]-res[j]==1){
                while(  (j+1)<=n-1 && res[j+1]-res[j]==1  ){
                    j++;
                }
                maxi = max(maxi,j-i+1);
                i=j;
                
            }else{
                i++;
                j++;
            }
        }
        return maxi==INT_MIN?1:maxi;
    }
};