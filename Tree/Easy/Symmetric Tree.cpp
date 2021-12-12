

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
    // recursive solution for the given question '

  bool issame(TreeNode *l,TreeNode *r){
        if(l==nullptr && r==nullptr) return true;
        if(l==nullptr || r==nullptr) return false;
        if(l->val!=r->val) return false;
        return issame(l->left,r->right) &&issame(l->right,r->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return issame(root->left,root->right);
    }