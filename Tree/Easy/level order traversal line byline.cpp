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



// here we will be traversing the tree by using level with line by line what it means is 
// lets suppose you have   1 2 3 4 5

//then output will be 

//            1
//            2 3
//            4 5

// here is the code 


void levelordertraversal(Node * root){
      queue <Node *> q;
      q.push(root);
      while(!q.empty()){
          int count   = q.size();
          for(int i=0;i<count;i++){
              Node * curr = q.front();
              cout<<curr->data<<" ";
              q.pop();
              if(curr->left)q.push(curr->left);
              if(curr->right)q.push(curr->right);
          }
          cout<<'\n';
      }
  }