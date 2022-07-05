class MapSum {
public:
    unordered_map<string,int>mp;
    
    void insert(string key, int val) {
        mp[key] = val;
    }
    
    int sum(string prefix) {
        int k=0;
        for(auto i:mp){
                if(i.first.substr(0,prefix.size())==prefix){
                    k=k+ mp[i.first];
                }
            }
        return k;
        }
        
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */