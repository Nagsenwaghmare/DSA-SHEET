


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
// main idea was to use the line by line traversal of binary tree and push the last element of that traversal into the vector and return that vector











void rightview(TreeNode *root,vector<int>&res){
        
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode *curr = q.front();
                q.pop();
                if(i==n-1){
                    res.push_back(curr->val);
                }
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int>res;
        rightview(root,res);
        return res;
    }