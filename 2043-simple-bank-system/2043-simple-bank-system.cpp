class Bank {
public:
    vector<long long>balance;
    Bank(vector<long long>& bal) {
        for(int i=0;i<bal.size();i++)
        {
            balance.push_back(bal[i]);
        }
    }
    bool transfer(int account1, int account2, long long money) {
        if((account1>=1 and account1<=balance.size()) and (account2>=1 and account2<=balance.size()))
        {
            if(money <= balance[account1-1])
            {   
                balance[account1-1] = balance[account1-1]-money;
                balance[account2-1] = balance[account2-1]+money;
                return true;
            }
            else
                return false;
        }
        return false;
    }
    bool deposit(int account, long long money) {
        if((account>=1 and account<=balance.size()))
        {
            balance[account-1] = balance[account-1] + money;
            return true;
        }
        else
            return false;
    }
    bool withdraw(int account, long long money) {
        if((account>=1 and account<=balance.size()))
        {
            if(money <= balance[account-1])
            {
                balance[account-1]-=money;
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }
};
