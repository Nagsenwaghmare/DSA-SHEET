class Solution {
public:
    int gcd(int a,int b){
        if(b==0)return a;
        else return gcd(b,a%b);
    }
    int lcm(int a,int b){
        long long c = a*b;
        return c/gcd(a,b);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;
        for(auto i:deck){
            mp[i]++;
        }
        vector<int>res;
        for(auto i:mp){
            res.push_back(i.second);
        }
        if(res.size()==1){
            return res[0]>=2;
        }
        if(res.size()==2){
            return gcd(res[0],res[1])>=2;
        }
        int ans= gcd(res[0],res[1]);
        cout<<ans<<" ";
        for(int i=2;i<res.size();i++){
            ans = gcd(ans,res[i]);
        }
        cout<<ans<<" ";
        return ans>=2;
    }
};