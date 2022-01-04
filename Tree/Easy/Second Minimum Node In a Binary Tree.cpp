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
    int findSecondMinimumValue(TreeNode* root) {
        int secmin =-1;
        vector<int>res;
        int min = INT_MAX;
        set<int>s;
        inorder(root,res);
        for(int i=0;i<res.size();i++){
            s.insert(res[i]);
        }
        vector<int>result;
        for(auto it:s){
            result.push_back(it);
        }
        return s.size()==1 ?-1: result[1];
    }