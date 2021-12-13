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


  bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return false;
        if(issame(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) ||isSubtree(root->right,subRoot);
    }
    bool issame(TreeNode *s,TreeNode *t){
        if(s==NULL && t==NULL) return true;
        if(s==NULL ||t==NULL) return false;
        if(s->val!=t->val) return false;
        return issame(s->left,t->left) && issame(s->right,t->right);
    }
    