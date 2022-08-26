class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        if(n>7){
        int rem = n/7;
        ans = rem*28;
        for(int i=0;i<rem;i++){
            ans+=7*i;
        }
        cout<<ans<<" ";
        int k = n-(rem*7);
        rem+=1;
        while(k>0){
            ans+=(rem);
            rem++;
            k--;
        }
            
    }else{
            int k=n%7;
            int rem=1;
        while(k>0){
            ans+=(rem);
            rem++;
            k--;
        }
        }
        return ans;
    }
};