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



   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr) return nullptr;
        if(p==root ||q==root) return root;
        TreeNode *lca1 = lowestCommonAncestor(root->left,p,q);
        TreeNode *lca2 = lowestCommonAncestor(root->right,p,q);
        if(lca1 && lca2) return root;
        if(lca1) return lca1;
        else return lca2;
        
    }