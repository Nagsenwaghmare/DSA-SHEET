class Trie{
    public:
    vector<Trie*> v;
    bool isEnd;
    int data;
    Trie(){
        v=vector<Trie*>(10,nullptr);
        isEnd=false;
        data = -1;
    }
};
class Solution {
    void insert(Trie* node, int a)
    {
        Trie* root = node;
        string key = to_string(a);
        for(auto &x:key)
        {
            int curr = x-'0';
            if(root->v[curr]==nullptr) root->v[curr]=new Trie();
            root = root->v[curr];
        }
        root->isEnd=true;
        root->data = a;
    }
    vector<int> ans;
    void printAll(Trie* root)
    {
        if(root->isEnd){
            ans.push_back(root->data);
        }
        for(int i=0;i<10;i++){
            if(root->v[i]) printAll(root->v[i]);
        }
    }
public:
    vector<int> lexicalOrder(int n) {
        ans.clear();
        Trie* root = new Trie();
        for(int i=1;i<=n;i++) insert(root,i);
        printAll(root);
        return ans;
    }
};