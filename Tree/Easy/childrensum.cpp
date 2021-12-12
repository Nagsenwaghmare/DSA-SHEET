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


bool childrensum(Node *root){
    if(root->left==nullptr && root->right==nullptr) return true;
    if(root->left==nullptr && root->right->val==root->val) return true;
    if(root->left->val==root->val && root->right==nullptr) return true;
    if(root->left->val+root->right->val!=root->val)return false;
    return childrensum(root->left) && childrensum(root->right); 
}


int main(){
    Node *root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(2);
    root->right->left = new Node(2);
    root->right->right = new Node(1);

    cout<<childrensum(root);
}
