class Solution {
public:
    int calc(int k,vector<int>&index){
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto i:index){
            pq.push(abs(i-k));
        }
        return pq.top();
    }
    vector<int> shortestToChar(string s, char c) {
        vector<int>res,index;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                index.push_back(i);
            }
        }
        for(int i=0;i<s.size();i++){
            res.push_back(calc(i,index));
        }
        return res;
    }
};