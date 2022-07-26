/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr)return nullptr;
        if(root==p || root==q) return root;
        TreeNode* lca1 = lowestCommonAncestor(root->left,p,q);
        TreeNode* lca2 = lowestCommonAncestor(root->right,p,q);
        if(lca1!=nullptr && lca2!=nullptr) return root;
        if(lca1!=nullptr)return lca1;
        return lca2;
    }
};