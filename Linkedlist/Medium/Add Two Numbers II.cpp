

#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


class Solution {
public:
    
    ListNode *reverse(ListNode *head){
        ListNode *prev = NULL;
        ListNode *curr = head;
        while(curr!=NULL){
            ListNode *Next = curr->next;
            curr->next =prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode *temp =new ListNode(0);
        ListNode *k  = temp;
        int c = 0;
        while(c||l2||l1){
            c+=(l1?l1->val:0)+(l2?l2->val:0);
            temp->next = new ListNode(c%10);
            c/=10;
            temp=temp->next;
            if(l2)l2=l2->next;
            if(l1)l1=l1->next;
        }
            
        return reverse(k->next);
    }
};


