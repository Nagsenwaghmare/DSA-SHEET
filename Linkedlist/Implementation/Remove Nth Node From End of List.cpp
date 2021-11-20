
#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr) return nullptr;
        ListNode newhead(-1);
        newhead.next = head;
        ListNode *fast = &newhead;
        ListNode *slow = &newhead;
        for(int i=0;i<n;i++){
            fast = fast->next; 
        }
        while(fast->next!=NULL){
            fast = fast->next;
            slow=slow->next;
        }
        ListNode *nodetobedeleted = slow->next;
        slow->next = slow->next->next;
        delete(nodetobedeleted);
        return newhead.next;
    }