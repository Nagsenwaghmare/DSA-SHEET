#include<bits/stdc++.h>
using namespace std;


// implementation of  doubly linkedlist list


struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next=prev=NULL;
    }
};
void printlist(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


Node *insertatbegin(Node *head,int m){
        Node *temp = new Node(m);
        if(head==NULL) return temp;
        temp->next = head;
        head->prev = temp;
        return temp;

}


int main(){
    Node *head  = new Node(1);
    Node *temp1 = new Node(2);
    Node *temp2 = new Node(3);
    Node *temp3 = new Node(4);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->prev = temp2;
    temp2->prev = temp1;
    cout<<"before addition\n";
    printlist(head);
    cout<<"after addition\n";
    int k;
    cin>>k;
    head = insertatbegin(head,k);
    printlist(head);

}