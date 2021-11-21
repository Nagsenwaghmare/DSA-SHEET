#include <bits/stdc++.h>
using namespace std;




struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


  ListNode* swapPairs(ListNode* head) {

        ListNode *dummy = new ListNode(0);
        dummy->next= head;
        ListNode *prev = dummy;
        ListNode *curr = dummy;
        ListNode *Next = dummy;
        int size = 0;
        while(curr->next){
            size++;
            curr = curr->next;
        }
        while(size>=2){
            curr = prev->next;
            Next = curr->next;
            curr->next = Next->next;
            Next->next = prev->next;
            prev->next = Next;
            Next = curr->next;
            size-=2;
            prev = curr;
        }
        return dummy->next;
    }