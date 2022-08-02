class TrieNode{
  public:
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
        int idx =0;
        for(int i=0;i<str.size();i++){
            idx =  str[i]-'a';
            if(curr->child[idx]==nullptr){
                curr->child[idx] = new TrieNode();
            }
            curr = curr->child[idx];
        }
        curr->isend = true;
    }
    string check(TrieNode *root,string word){
        TrieNode * curr =root;
        string s = "";
        for(auto i:word){
            if(curr->child[i-'a']==nullptr)break;
            s+=i;
            curr = curr->child[i-'a'];
            if(curr->isend)return s;
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        TrieNode * root = new TrieNode();
        for(auto i:dictionary){
            insert(root,i);
        }
        stringstream geek(sentence);
        string word = "";
        string ans = "";
        while(geek>>word){
            ans+=check(root,word);
            ans+=" ";
        }
        ans.pop_back();
        return ans;
    }
};