/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    TreeNode * k;
    vector<int>res;
    int i=0;
    int n = res.size();
    void inorder(TreeNode *k){
        if(k==nullptr)return ;
        inorder(k->left);
        res.push_back(k->val);
        inorder(k->right);
    }
    BSTIterator(TreeNode* root) {
        k = root;
        inorder(k);
    }
    
    int next() {
        return res[i++];
    }
    
    bool hasNext() {
        cout<<res.size()<<" ";
        if((i)>=0 && (i)<res.size())return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */