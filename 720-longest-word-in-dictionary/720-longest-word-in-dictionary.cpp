struct TrieNode{
    bool isend;
    TrieNode *child[26];
    TrieNode(){
        isend = false;
        for(int i=0;i<26;i++){
            child[i] = nullptr;
        }
    }
};



class Solution {
public:
    void insert(TrieNode *root,string str){
        TrieNode * curr = root;
        for(auto i:str){
            if(curr->child[i-'a']==nullptr){
                curr->child[i-'a'] = new TrieNode();
            }
            curr = curr->child[i-'a'];
        }
        curr->isend = true;
    }
    bool search(TrieNode *root,string s){
        TrieNode *curr = root;
        int cnt=0;
        for(auto k:s){
            
            curr =curr->child[k-'a'];
            if(curr->isend==true)++cnt;
        }
        return cnt==s.size();
    }
    string longestWord(vector<string>& words) {
        TrieNode *root = new TrieNode();
        for(auto i:words){
            insert(root,i);
        }
        string ans = "";
        for(auto s:words){
             if(ans.size() > s.size()) continue;
            if(search(root,s)){
                if(ans.size() == s.size()) ans = min(s, ans);
                else ans = s;
            }
        }
        return ans;
    }
};