#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = right =NULL;
    }
};


bool binarysearch(Node *root,int x){
    while(!root){
        if(root->data==x) return true;
        if(root->data>x){
         root = root->left;
        }
        
        if(root->data<x){
            root = root->right;
        }
    }
}