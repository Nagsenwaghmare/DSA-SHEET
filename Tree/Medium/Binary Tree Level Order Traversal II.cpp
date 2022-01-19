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



  vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode *>q;
        vector<vector<int>>res;
        if(!root) return {};
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                TreeNode *curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            res.push_back(temp);
        }
        stack<vector<int>>s;
        for(auto i:res){
            s.push(i);
        }
        res.clear();
        while(!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }