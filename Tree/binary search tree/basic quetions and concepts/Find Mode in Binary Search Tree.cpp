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



void fillfrequency(unordered_map<int,int>&mp,TreeNode *root){
        if(!root) return;
        mp[root->val]++;
        fillfrequency(mp,root->left);
        fillfrequency(mp,root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> res; 
        unordered_map<int,int>mp;
        fillfrequency(mp,root);
        int maxfreq = -1;
        for(auto i:mp){
            maxfreq = max(maxfreq,i.second);
        }
        for(auto it:mp){
            if(it.second==maxfreq){
                res.push_back(it.first);
            }
        }
        return res;
    }