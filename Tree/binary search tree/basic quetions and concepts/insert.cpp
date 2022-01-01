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

Node *insert(Node * root,int x){
    Node * parent = nullptr;
    Node * curr = root;
    Node * temp = new Node (x);
    while(curr!=nullptr){
        parent  = curr;
        if(curr->data==x) return root;
        if(curr->data>x){
            curr = curr->left;
        }
        if(curr->data<x){
            curr = curr->right;
        }
    }
    if(parent = nullptr) return temp;
    if(parent->data>x){
        parent->left = temp;
    }else{
        parent->right = temp;
    }
    return root;
}