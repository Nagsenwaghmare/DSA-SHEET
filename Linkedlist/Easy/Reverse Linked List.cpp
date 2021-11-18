
#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


class Solution {
public:
    ListNode *reverse(ListNode *head,ListNode *newhead){
        if(head==NULL)return newhead;
        ListNode *Next = head->next;
        head->next = newhead;
        return reverse(Next,head);
    }
    ListNode *reverseList(ListNode* head) {
        return reverse(head,NULL);
    }
    
};