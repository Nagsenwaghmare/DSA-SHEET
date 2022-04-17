class ATM {
public:
    
    long long  k[5] = {};
    vector<long long>notes = {20,50,100,200,500};
    void deposit(vector<int> banknotesCount) {
        for(int i=0;i<5;i++){
            k[i]+=banknotesCount[i];
        }    
    }
    
    vector<int> withdraw(int amount) {
        vector<int>use(5);
        for(int i=4;i>=0;i--){
            use[i] =min(k[i],amount/notes[i]);
            amount-=use[i]*notes[i];
        }
        if(amount){
            return {-1};
        }else{
            for(int i=0;i<5;i++){
                k[i]-=use[i];
            }
        }
        return use;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */