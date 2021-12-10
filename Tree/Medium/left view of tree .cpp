#include <bits/stdc++.h>
using namespace std;


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

//  here we will find the leftview of binary  tree by using time complexity of 0(n);


void leftview(Node *root){
      queue<Node *>q;
      q.push(root);
      while(!q.empty()){
          int count = q.size();
          for(int i=0;i<count;i++){
              Node *curr = q.front();
              q.pop();
              if(i==0){
                  cout<<curr->data<<" ";
              }
              if(curr->left)q.push(curr->left);
              if(curr->right)q.push(curr->right);
          }
          cout<<'\n';
      }
  }