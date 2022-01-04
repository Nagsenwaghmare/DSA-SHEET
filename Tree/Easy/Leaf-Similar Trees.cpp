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



void leafvector(TreeNode *root,vector<int>&res){
        if(!root){
            return ;
        }
        leafvector(root->left,res);
        if(!root->left && !root->right) res.push_back(root->val);
        leafvector(root->right,res);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>res1;
        leafvector(root1,res1);
        vector<int>res2;
        leafvector(root2,res2);
        return res1==res2;
    }