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
  
int mindepth = 1;
    int mdepth(TreeNode *root){
        if(!root->left && !root->right){
            return 1;
        }
        if(!root->left && root->right) mindepth  = 1+minDepth(root->right);
        if(!root->right && root->left) mindepth = 1+minDepth(root->left);
        if(root->right && root->left) mindepth = 1+min(minDepth(root->left),minDepth(root->right));
        return mindepth;
    }
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        return mdepth(root);
    }