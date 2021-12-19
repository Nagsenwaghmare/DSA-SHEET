
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

      int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode *,int>>q;
        q.push({root,0});
        int ans = 0;
        while(!q.empty()){
            int n = q.size();
            int min = q.front().second;
            int start,end;
            for(int i=0;i<n;i++){
            int currid = q.front().second-min;
            TreeNode * curr = q.front().first;
            q.pop();
            if(i==0)start = currid;
            if(i==n-1)end = currid;
            if(curr->left)q.push({curr->left,currid*2+1});
            if(curr->right)q.push({curr->right,currid*2+2});
            }
            ans = max(ans,end-start+1);
        }
        return ans;
    }
