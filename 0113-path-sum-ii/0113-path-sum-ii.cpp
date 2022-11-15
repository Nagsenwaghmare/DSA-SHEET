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
    void helper(TreeNode * root,vector<int>temp,vector<vector<int>>&res){
        if(root==nullptr)return;
        temp.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr){
            res.push_back(temp);
            return;
        }
        helper(root->left,temp,res);
        helper(root->right,temp,res);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        if(root==nullptr)return ans;
        vector<int>temp;
        vector<vector<int>>res;
        helper(root,temp,res);
        for(auto i:res){
            int sum=0;
            for(auto j:i)sum+=j;
            if(sum==targetSum)ans.push_back(i);
        }
        return ans;
    }
};