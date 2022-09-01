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
    int helper(TreeNode * root,int maximum){
        if(!root)return 0;
        int res = root->val>=maximum?1:0;
        res+=helper(root->left,max(maximum,root->val));
        res+=helper(root->right,max(maximum,root->val));
        return res;
    }
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        int maximum = INT_MIN;
        return helper(root,maximum);
    }
};