#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node * next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

// Insert node at end function 
Node *insertatend(Node *head,int a){
    Node *temp  = new Node(a);
    if(head==NULL){
        return temp;
    }
    Node * t = head;
    while(t->next!=NULL){
        t= t->next;
    }
    t->next = temp;
    return head;
}


// delete  first node function

Node *deletfirstNode(Node *head){
    if(head==NULL) return NULL;
    else{
        Node *temp = head->next;
        return temp;
    }
}

//delete last node function

Node *deletlastNode(Node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL) return NULL;
    else{
        Node * temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
}
//print the whole linkedlist

void printlist(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


// main function


int main(){
    Node *head = new Node(30);
    head->next = new Node(40);
    head->next->next = new Node(50);
    insertatend(head,70);
    head = deletlastNode(head);
    printlist(head);
}
