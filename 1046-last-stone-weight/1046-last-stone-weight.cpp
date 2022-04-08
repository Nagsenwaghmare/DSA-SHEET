class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto i:stones){
            pq.push(i);
        }
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            if(x==y){
                pq.pop();
            }else{
                pq.pop();
                pq.push(abs(x-y));
            }
        }
        return pq.empty()==true?0:pq.top();
    }
};