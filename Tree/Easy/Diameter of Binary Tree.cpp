

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




int height(TreeNode *root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    
    int helper(TreeNode * root,int diameter){
        if(root==nullptr) return 0;
        diameter = max(diameter,height(root->left)+height(root->right));
        return max(diameter,max(helper(root->left,diameter),helper(root->right,diameter)));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = INT_MIN;
        return helper(root,diameter);
    }