// binary search tree deletion 
// here first we will search for the key in BST and then we will store it inside the temporary node and 
// will return that node 
// now the question arises when we have both the left and right nodes of the key to be deleted are not null
// then we will find the greatest succesor which will be the leftmost of right child;

#include <bits/stdc++.h>
using namespace std;


struct Node{
    int key;
    Node *left,*right;
    Node(int x){
        key = x;
        left=right=nullptr;
    }
};


Node * getsuccesor(Node * curr){
    curr = curr->right;
    while(!curr && !curr->left){
        curr = curr->left;
    }
    return curr;
}


Node * deletenode(Node * root,int x){
    if(!root) return nullptr;
    if(root->key>x){
        root->left = deletenode(root->left,x);
    }else if(root->key<x){
        root->right = deletenode(root->right,x);
    }else{
        if(root->left==nullptr){
            Node *temp = root->right;
            delete(root);
            return temp;
        }else if(root->right==nullptr){
            Node *temp = root->left;
            delete(root);
            return temp;
        }else{
            Node * succ = getsuccesor(root);
            root->key = succ->key;
            root->right = deletenode(root->right,succ->key);
        }
    }
    return root;
}