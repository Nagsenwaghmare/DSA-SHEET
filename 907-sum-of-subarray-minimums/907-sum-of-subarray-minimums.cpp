class Solution {
public:
  int sumSubarrayMins(vector<int>& a) {
    stack<pair<int,int>>p,n;
    vector<int> left(a.size()), right(a.size());
    for(int i = 0; i < a.size(); i++) left[i] =  i + 1;
    for(int i = 0; i < a.size(); i++) right[i] = a.size() - i;
    for(int i = 0; i < a.size(); i++){
        while(!p.empty() && a[p.top().second]>a[i]){
              p.pop();
        }
        left[i] = p.empty()?i+1:i-p.top().second;
        p.push({a[i],i});
        while(!n.empty() && n.top().first>a[i]){
            auto x = n.top();n.pop();
            right[x.second] = i-x.second;
        }
        n.push({a[i],i});
    }

    long ans = 0;
    long mod = (int)1e9 + 7;
    for(int i = 0; i < a.size(); i++) {
    ans = (ans +(long) a[i] * left[i] * right[i]) % mod;
    }
    return (int)ans;
  }
};