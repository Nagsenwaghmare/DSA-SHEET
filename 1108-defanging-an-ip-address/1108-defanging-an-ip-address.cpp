class Solution {
public:
    string defangIPaddr(string s) {
        string str = "";
        for(auto i:s){
            if(i=='.')str+="[.]";
            else str+=i;
        }
        return str;
    }
};