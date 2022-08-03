struct TrieNode{
    // bool isend;
    TrieNode *child[2];
    TrieNode(){
        // isend = false;
        for(int i=0;i<2;i++){
            child[i] = nullptr;
        }
    }
};



class Solution {
public:
    void insert(TrieNode *root,int x){
        TrieNode * curr = root;
        bitset<32>b(x);
        for(int i=31;i>=0;i--){
            if(curr->child[b[i]]==nullptr){
                curr->child[b[i]] = new TrieNode();
            }
            curr = curr->child[b[i]];
        }
    }
    int maxxor(TrieNode *root,int x){
        TrieNode * curr = root;
        bitset<32>b(x);
        int ans =0;
        for(int i=31;i>=0;i--){
            if(curr->child[!b[i]]){
                ans+=(1<<i);
                curr = curr->child[!b[i]];
            }else{
                curr = curr->child[b[i]];
            }
        }
        return ans;
    }
        
    int findMaximumXOR(vector<int>& nums) {
        int res =0;
        TrieNode * root = new TrieNode();
        for(auto i:nums){
            insert(root,i);
        }
        for(auto i:nums){
            res = max(res,maxxor(root,i));
        }
        return res;
    }
};