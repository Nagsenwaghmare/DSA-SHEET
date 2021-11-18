#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  

  class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode newHead(0);
        ListNode *temp = &newHead;
        while(l1 || l2|| carry){
            carry += (l1?l1->val:0) +(l2?l2->val:0);
            temp->next = new ListNode(carry%10);
            temp = temp->next;
            carry=carry/10;
            if(l1) l1= l1->next;
            if(l2) l2= l2->next;
        }
        return newHead.next;;
    }
};