struct trie{
    bool isword;
    trie *next[26];
    trie(){
        isword = false;
        for(int i=0;i<26;i++){
            next[i] = NULL;
        }
    }
};


class Trie {
public:
    trie *root = new trie();
    void insert(string word) {
        trie * temp = root;
        for(int i=0;i<word.size();i++){
            if(temp->next[word[i]-'a']==NULL){
                temp->next[word[i]-'a'] = new trie();
            }
            temp = temp->next[word[i]-'a'];
        }
        temp->isword = true;
    }
    
    bool search(string word) {
        trie * temp = root;
        for(int i=0;i<word.size();i++){
            if(temp->next[word[i]-'a']==NULL){
                return false;
            }
            temp = temp->next[word[i]-'a'];
        }
        return temp->isword;
    }
    
    bool startsWith(string prefix) {
        trie *temp = root;
        for(int i=0;i<prefix.size();i++){
            if(temp->next[prefix[i]-'a']==NULL)return false;
            temp = temp->next[prefix[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */