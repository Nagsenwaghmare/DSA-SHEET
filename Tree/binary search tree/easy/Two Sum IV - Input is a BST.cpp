
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









void inorder(TreeNode * root,vector<int>&res){
        if(!root) return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> res;
        inorder(root,res);
        //bool flag  = true;
        set<int>s;
        for(int i=0;i<res.size();i++){
            if(s.find(k-res[i])!=s.end()){
                return true;
            }
            s.insert(res[i]);
        }
        return false;
    }