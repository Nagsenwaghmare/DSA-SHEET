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
    TreeNode* increasingBST(TreeNode* head) {
        vector<int>res;
        inorder(head,res);
        TreeNode * root = new TreeNode(res[0]);
        TreeNode * main = root;
        for(int i=1;i<res.size();i++){
            TreeNode * curr = new TreeNode(res[i]);
            root->right = curr;
            root = root->right;
        }
        return main;
    }