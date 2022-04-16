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
    int presum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return nullptr;
        if(root->right)convertBST(root->right);
        presum=root->val =  presum + root->val;
        if(root->left)convertBST(root->left);
        return root;
    }
};