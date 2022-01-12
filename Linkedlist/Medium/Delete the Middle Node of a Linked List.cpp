
#include <bits/stdc++.h>
using namespace std;



// here in this question we used the two pointer approach where we used the fact that if two players are running on the track with one being 
//constant velocity  and other twice of first then when second finishes the race the first will be at the middle of the race 
// hence here we can easily find the middle node and can easily delete it
// this was the two pointer approach hope you like it.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr) return nullptr;
        ListNode *slow = head;
        ListNode * fast = head->next->next;
        while(fast!= nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
        return head;
    }