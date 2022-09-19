struct trie{
    bool isword;
    trie *next[26];
    int c;
    trie(){
        isword=false;
        c=0;
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
    }
};
class Solution {
public:
    trie *root = new trie();
    trie *add(string & word){
        trie * temp = root;
        for(auto i:word){
            if(temp->next[i-'a']==nullptr){
                temp->next[i-'a']  =new trie();
            }
            temp = temp->next[i-'a'];
            temp->c++;
        }
        temp->isword =true;
        return root;
    }
    int ans;
    int find(string &s,trie * root){
        trie * temp =root;
        for(auto i:s){
            if(temp->next[i-'a']){
                temp = temp->next[i-'a'];
                ans+=temp->c;
            }
        }
        return ans;
    }
    vector<int> sumPrefixScores(vector<string>& str) {
        int n = str.size();
        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            add(str[i]);
        }
        for(int i=0;i<n;i++){
            ans=0;
            result[i] = find(str[i],root);
        }
        return result;
    }
};