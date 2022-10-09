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
    vector<int>res;
    void inorder(TreeNode * root){
        if(!root)return;
        res.push_back(root->val);
        inorder(root->left);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        map<int,int>mp;
        int n = res.size();
        for(int i=0;i<n;i++){
            if(mp.find(k-res[i])!=mp.end()){
                return true;
            }else{
                mp[res[i]]++;
            }
        }
        return false;
    }
};