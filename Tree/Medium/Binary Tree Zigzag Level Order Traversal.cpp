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



  vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> res;
        stack<TreeNode *>s1;
        stack<TreeNode *>s2;
        s1.push(root);
        while(!s1.empty() || !s2.empty()){
            vector<int>temp;
            while(!s1.empty()){
                TreeNode *curr = s1.top();
                s1.pop();
                temp.push_back(curr->val);
                if(curr->left)s2.push(curr->left);
                if(curr->right)s2.push(curr->right); 
            }
            if(!temp.empty()){
                res.push_back(temp);
            }
            vector<int>tmp;
            while(!s2.empty()){
                TreeNode *curr  = s2.top();
                s2.pop();
                tmp.push_back(curr->val);
                if(curr->right)s1.push(curr->right);
                if(curr->left)s1.push(curr->left);
            }
            if(!tmp.empty()){
                res.push_back(tmp);
            }
        }
        return res;
    }