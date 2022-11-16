
class Solution {
public:
    vector<int>res;
    void inorder(TreeNode * root){
        if(root==nullptr)return;
        inorder(root->left);
        res.push_back(root->val);
        inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root==nullptr)return 0;
        inorder(root);
        sort(begin(res),end(res));
        return res[k-1];
    }
};