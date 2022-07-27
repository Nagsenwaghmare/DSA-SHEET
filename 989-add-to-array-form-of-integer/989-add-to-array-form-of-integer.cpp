class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>res;
        vector<int>knum;
        while(k!=0){
            knum.push_back(k%10);
            k/=10;
        }
        reverse(knum.begin(),knum.end());
        int i = num.size()-1;
        int j = knum.size()-1;
        int carry =0;
        vector<int>result;
        while(i>=0 || j>=0){
            if(i>=0) carry+=num[i];
            if(j>=0)carry+=knum[j];
            i--,j--;
            res.push_back(carry%10);
            carry/=10;
        }
        if(carry)res.push_back(1);
        reverse(res.begin(),res.end());
        return res;
    }
};