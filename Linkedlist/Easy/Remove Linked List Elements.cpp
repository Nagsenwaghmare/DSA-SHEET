
#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };









ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        ListNode *temp = head;
        while(head!=NULL && head->val==val){
            head=head->next;
        }
        
        while(temp->next!=NULL && temp!=NULL){
            if(temp->next->val==val){
                temp->next = temp->next->next;
            }else{
                temp = temp->next;
            }
        }
        return head;
    }