
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



  void flatten(TreeNode* root) {
        if(!root) return;
        stack<TreeNode *>s;
        vector<TreeNode *> res;
        s.push(root);
        while(!s.empty()){
            TreeNode * curr = s.top();
            res.push_back(curr);
            s.pop();
            if(curr->right)s.push(curr->right);
            if(curr->left)s.push(curr->left);
        }
        for(int i=0;i<res.size()-1;i++){
            res[i]->left = nullptr;
            res[i]->right = res[i+1];
        }
    }