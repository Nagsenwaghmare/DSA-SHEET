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


  int sum = 0;
    void leftsum(TreeNode *root){
        if(root==NULL)return ;
        if(root->left){
            if(!root->left->left && !root->left->right)
            sum+=root->left->val;
        }
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        leftsum(root);
        return sum;
    }