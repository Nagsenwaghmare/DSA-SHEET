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
    void inorder(TreeNode* root,vector<TreeNode *>&res){
        if(root==nullptr)return;
        inorder(root->left,res);
        res.push_back(root);
        inorder(root->right,res);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        vector<TreeNode *>res;
        inorder(cloned,res);
        for(auto i:res){
            cout<<i->val<<" ";
            if(i->val==target->val){
                return i;
            }
        }
        return nullptr;
    }
};