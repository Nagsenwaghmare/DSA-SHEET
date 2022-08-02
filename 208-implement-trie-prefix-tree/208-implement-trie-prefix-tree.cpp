
class TrieNode {
  public:
        bool isend;
        TrieNode *child[26];
        TrieNode(){
            isend  = false;
            for(int i=0;i<26;i++){
                child[i] = NULL;
            }
        }
};


class Trie {
public:
        Trie(){
          root = new TrieNode();
        }
    
    void insert(string word) {
        TrieNode * curr = root;
        int idx =0;
        for(int i=0;i<word.size();i++){
            idx = word[i]-'a';
            if(curr->child[idx]==NULL){
                curr->child[idx] = new TrieNode();
            }      
            curr = curr->child[idx];
        }
        curr->isend = true;
    }
    
    bool search(string word) {
        TrieNode * curr = root;
        int idx =0;
        for(int i=0;i<word.size();i++){
            idx = word[i]-'a';
            if(curr->child[idx]==NULL)return false;
            curr = curr->child[idx];
        }
        return curr->isend;
    }
    
    bool startsWith(string prefix) {
        TrieNode * curr  = root;
        int idx =0;
        for(int i=0;i<prefix.size();i++){
            idx = prefix[i]-'a';
            if(curr->child[idx]==NULL){
                return false;
            }
            curr  = curr->child[idx];
        }
        return true;
    }
    private:
    TrieNode* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */