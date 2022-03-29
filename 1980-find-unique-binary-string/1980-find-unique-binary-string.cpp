class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int>s;
        for(auto i:nums){
            s.insert(stoi(i,nullptr,2));
        }
        int x = 0;
        while(true){
            if(s.find(x)==s.end()){
                return bitset<16>(x).to_string().substr(16-nums.size());
            }
            x++;
        }
        return "";
    }
};