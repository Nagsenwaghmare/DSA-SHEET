#include <bits/stdc++.h>
using namespace std;



struct TreeNode {
     int val;
      TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  void helper(TreeNode *root,int sum,vector<int>&res){
        if(!root->left && !root->right){
            res.push_back(sum);
            return;
        }
        if(root->left) helper(root->left,sum+root->left->val,res);
        if(root->right) helper(root->right,sum+root->right->val,res);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int>res;
        if(root==NULL ) return false;
        int sum = 0;
        helper(root,root->val,res);
        for(int i=0;i<res.size();i++){
            if(targetSum==res[i]){
                return true;
            }
        }
        return false;
    }