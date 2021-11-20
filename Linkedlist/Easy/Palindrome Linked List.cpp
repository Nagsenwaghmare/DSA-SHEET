
#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
ListNode *firsthalf(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next!=NULL &&fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *curr = head;
        while (curr != NULL) {
            ListNode *nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *firsthalfend = firsthalf(head);
        ListNode *secondhalfstart = reverseList(firsthalfend->next);
        ListNode *p1 = head;
        ListNode *p2 = secondhalfstart;
        bool res = true;
        while(p2!=NULL){
            if(p1->val!=p2->val) return false;
            p1 = p1->next;
            p2= p2->next;
        }
        return true;
    }