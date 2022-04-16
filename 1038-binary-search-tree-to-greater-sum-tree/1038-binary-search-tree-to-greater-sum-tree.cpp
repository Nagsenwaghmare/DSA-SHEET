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
class Solution {
public:
    int k =0;
    TreeNode * inorder(TreeNode * root){
        if(root->right)inorder(root->right);
        k =root->val= k + root->val;
        if(root->left)inorder(root->left);
        return root;
        
    }
    TreeNode* bstToGst(TreeNode* root) {
        return inorder(root);
    }
};