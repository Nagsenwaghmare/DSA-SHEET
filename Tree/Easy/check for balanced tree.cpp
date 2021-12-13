#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *left;
    Node *right;
    Node(int x){
        val = x;
        left = right =NULL;
    }
};







int checkforbalancedtree(Node *root){
    if(root==nullptr)return 0;
    int lh = checkforbalancedtree(root->left);
    if(lh==-1) return -1;
    int rh = checkforbalancedtree(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return 1+max(lh,rh);

}