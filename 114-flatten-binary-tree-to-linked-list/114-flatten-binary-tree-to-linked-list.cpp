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
    void preorder(TreeNode * root,vector<TreeNode *>&res){
        if(root==nullptr) return;
        res.push_back(root);
        if(root->left)preorder(root->left,res);
        if(root->right)preorder(root->right,res);
    }
    void flatten(TreeNode* root) {
        if(!root) return ;
        vector<TreeNode *>res;
        preorder(root,res);
        for(auto i:res){
            cout<<i->val<<" ";
        }
        for(int i=0;i<res.size()-1;i++){
            res[i]->left = nullptr;
            res[i]->right = res[i+1];
        }
    }
};