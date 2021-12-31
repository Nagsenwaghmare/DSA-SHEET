

#include<bits/stdc++.h>
using namespace std;


struct Node{
    int key;
    Node *left,*right;
    Node(int x){
        key = x;
        left=right=nullptr;
    }
};


//here we are doing implementation of BST floor function 
//where we have been provided with the key value for which we have to reture the floor of 
// that key and floor is called the smaller value than given key which is largest among the smaller values
Node * floor(Node * root,int x){
    Node * res = nullptr;
    while(!root){
        if(root->key ==x) return root;
        else if(root->key>x){
            root = root->left;
        }
        else{
            res = root;
            root = root->right;
        }
    }
    return res;
} 