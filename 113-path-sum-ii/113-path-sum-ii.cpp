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
    vector<vector<int>>path;
    void helper(TreeNode *root,vector<int>temp,int sum){
        if(root==nullptr)return;
        if(root->left==NULL && root->right==NULL && sum==root->val){
            temp.push_back(root->val);
            path.push_back(temp);
            return;
        }
        temp.push_back(root->val);
        if(root->left!=nullptr)helper(root->left,temp,sum-root->val);
        if(root->right!=nullptr)helper(root->right,temp,sum-root->val);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int>temp;
        helper(root,temp,sum);
        return path;
    }
};