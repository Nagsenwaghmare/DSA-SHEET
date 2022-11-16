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
    map<int,int>mp;
    int preidx=0;
    TreeNode * build(int left,int right,vector<int>&preorder){
        if(left>right)return nullptr;
        TreeNode * root = new TreeNode(preorder[preidx]);
        int mid = mp[preorder[preidx++]];
        root->left = build(left,mid-1,preorder);
        root->right = build(mid+1,right,preorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return build(0,preorder.size()-1,preorder);
    }
};