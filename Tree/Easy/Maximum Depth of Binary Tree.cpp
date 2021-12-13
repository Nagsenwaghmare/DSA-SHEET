
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


  int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        return 1+max(maxDepth(root->left) ,maxDepth(root->right));
    }

 // /   maximum depth of tree is defined as the no of nodes in the longest path of the tree
 /// so by  logic we can say that maximum depth will always eqals to the height of the binary tree;