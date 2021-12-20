
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



void parent(map<TreeNode *,TreeNode*>&parent_track,TreeNode * root){
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            TreeNode *curr = q.front();
            q.pop();
            if(curr->left){
                parent_track[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right){
                parent_track[curr->right] = curr;
                q.push(curr->right);
            }
        }
    } 
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode *,TreeNode*>parent_track;
        parent(parent_track,root);
        map<TreeNode *,bool>visited;
        queue<TreeNode *>q;
        q.push(target);
        int dist = 0;
        visited[target] = true;
        while(!q.empty()){
            int n = q.size();
            if(dist++==k) break;
            for(int i=0;i<n;i++){
                TreeNode * current = q.front();
                q.pop();
                if(current->left && !visited[current->left]){
                    visited[current->left] = true;
                    q.push(current->left);
                }
                if(current->right && !visited[current->right]){
                    visited[current->right] = true;
                    q.push(current->right);
                }
                if(parent_track[current] && !visited[parent_track[current]]){
                    visited[parent_track[current]] = true;
                    q.push(parent_track[current]);
                }
            }
        }
        vector<int>res;
        while(!q.empty()){
            TreeNode * curr = q.front();
            q.pop();
            res.push_back(curr->val);
        }
        return res;
    }