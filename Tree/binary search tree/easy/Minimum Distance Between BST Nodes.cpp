




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






void inorder(TreeNode * root,vector<int>&res){
        if(!root) return ;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>res;
        inorder(root,res);
        int minimum = INT_MAX;
        for(int i=0;i<res.size()-1;i++){
            minimum = min(minimum,res[i+1]-res[i]);
        }
        return minimum;
    }