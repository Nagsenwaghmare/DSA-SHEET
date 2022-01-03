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


  void levelorder(TreeNode *root,vector<vector<TreeNode *>>&res,unordered_map<int,TreeNode*>&parent_track){
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<TreeNode *>temp;
            for(int i=0;i<n;i++){
                TreeNode * curr = q.front();
                temp.push_back(curr);
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                    parent_track[curr->left->val] = curr;
                    
                }
                if(curr->right){
                    q.push(curr->right);
                    parent_track[curr->right->val] = curr;
                }
            }
            res.push_back(temp);
        }
    } 
    bool isCousins(TreeNode* root, int x, int y) {
        vector<vector<TreeNode *>>res;
        unordered_map<int,TreeNode*>parent_track;
        levelorder(root,res,parent_track);
        for(int i=0;i<res.size();i++){
            set<int>s;
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j]->val<<" ";
                s.insert(res[i][j]->val);
            }
            cout<<'\n';
            if(s.find(x)!=s.end() && s.find(y)!=s.end() &&parent_track[x]!=parent_track[y] ) return true;
        }
        return false;
    }