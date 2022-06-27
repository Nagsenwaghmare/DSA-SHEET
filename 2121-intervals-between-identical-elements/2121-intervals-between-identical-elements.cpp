class Solution {
public:
    vector<long long> getDistances(vector<int>& A) 
    {
        int n = A.size();
        
        unordered_map<int,vector<long long>> m;
        for(int i=0;i<n;i++)
        {
            m[A[i]].push_back(i);
        }
        
        vector<long long> res(n);
        
        for(auto j:m)
        {
            vector<long long> temp = j.second;
            int len = temp.size();
            
            vector<long long> pre(len, 0);
            
            pre[0] = temp[0];
            for(int i=1;i<len;i++)
            {
                pre[i] = pre[i-1] + temp[i];
            }
            
            for(int i=0;i<len;i++)
            {
                long long count = 0;
                long long after = (len - 1 - i), before = i;
                
                count = (pre[len-1] - pre[i]) - (after*temp[i]);   
                if(i > 0) count += (before*temp[i] - (pre[i-1]));  
                
                res[temp[i]] = count;
            }
        }
        
        return res;
    }
};