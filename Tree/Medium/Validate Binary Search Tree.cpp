


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

  bool isValidBST(TreeNode* root) {
        if(!root) return true;
        stack<TreeNode *>s;
        TreeNode * prev = nullptr;
        while(root || !s.empty()){
            while(root){
                s.push(root);
                root = root->left;
            }
            root = s.top();
            s.pop();
            if(prev!=nullptr && prev->val>=root->val) return false;
            prev = root;
            root = root->right;
        }
        return true;
    }