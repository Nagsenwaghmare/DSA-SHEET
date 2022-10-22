class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>>res;
        int n = a.size();
        sort(begin(a),end(a));
        for(int i=0;i<n-2;i++){
            if(i==0 || a[i]!=a[i-1]){
                int l = i+1;
                int r = n-1;
                int target = 0-(a[i]);
                while(l<r){
                    if(a[l]+a[r]==target){
                        vector<int>temp;
                        temp.push_back(a[i]);
                        temp.push_back(a[l]);
                        temp.push_back(a[r]);
                        res.push_back(temp);
                        while(l<r && a[l]==a[l+1])l++;
                        while(l<r && a[r]==a[r-1])r--;
                        l++;
                        r--;
                    }else if((a[l]+a[r])<target){
                        l++;
                    }else if((a[l]+a[r])>target){
                        r--;
                    }
                }
            }
        }
        return res;
    }
};