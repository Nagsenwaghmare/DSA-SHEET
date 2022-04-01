class StockPrice {
public:
    
    map<int,int>mp;
    multiset<int>k;
    void update(int timestamp, int price) {
        if(mp.find(timestamp)!=mp.end()){
            k.erase(k.find(mp[timestamp]));
        }
        mp[timestamp] =price;
        k.insert(price);
    }
    
    int current() {
        return rbegin(mp)->second;
    }
    
    int maximum() {
        return *rbegin(k);
    }
    
    int minimum() {
        return *begin(k);
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */