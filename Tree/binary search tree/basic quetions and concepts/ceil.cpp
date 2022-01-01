// in this funtion we are gone find the larger value than the given target value in the tree
//next question is how we gonna find it we will find it using the any traversal we want it could be anything inorder,preorder,postorder
// then we will be using the extra array to store the values of the nodes which have values which are just greater than the given target value
// after that as we have the result vector then it is very simple to find the minimum among them 
// just by traversing the vector once we gonna keep track of minimum among them and we will create  a temporary node and will return that node by a 
// given function 


// below is the solution 
// time complexity = 0(h)
// space  complexity =0(h);

// lets think about the optimised solution 

#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node *left;
    Node *right;
    int val;
    Node(int x){
        val = x;
        left = right = NULL;
    }
};
void inorder(Node *root,vector<int>&res,int x){
    if(!root) return;
    inorder(root->left,res,x);
    if(root->val>=x){
        res.push_back(root->val);
    }
    inorder(root->right,res,x);
}
Node * Ceil(Node * root,int target){
    vector<int>res;
    inorder(root,res,target);
    Node * tempo;
    int minimum = INT_MAX;
    if(res.empty()) return nullptr; 
    for(auto i:res){
        if(i<minimum){
            minimum = i;
        }
    }
    tempo = new Node(minimum);
    return tempo;
}


int main(){
    Node * root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node (30);
    Node * temp = Ceil(root,40);
    cout<<temp->val;
}


// here we gonna discuss the optimised solution and here we have optimised our space complextity
// by 0(h) to  0(1)

Node * res = nullptr;
Node * ceilt(Node * root,int x){
    if(!root->right && !root->left) return res;
    if(root->val==x) return root;
    else if(root->val>x){
        res = root;
        root = root->left;
    }
    else if(root->val<x){
        root = root->right;
    }
    return res;
}
