class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int cnt=0;
        while(true){
            for(int i=0;i<tickets.size();i++){
                if(tickets[i]!=0){
                    cnt+=1;
                    tickets[i]-=1;
                }
                if(tickets[k]==0)return cnt;
            }
        }
        return cnt;
    }
};