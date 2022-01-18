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
vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        if(!root) return {};
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int maximum = INT_MIN;
            for(int i=0;i<n;i++){
                TreeNode * curr = q.front();
                q.pop();
                maximum = max(maximum,curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            res.push_back(maximum);
        }
        return res;
    }