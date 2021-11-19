#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };




  class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;
        unordered_map<ListNode*,int>mp;
        while(a!=NULL){
            mp[a]++;
            a= a->next;
        }
        while(b!=NULL){
            if(mp[b]>0){
                return b; 
            }
            b = b->next;
        }
        return NULL;
    }
};

//

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;
        while(a!=b){
            a=a==NULL?headB:a->next;
            b=b==NULL?headA:b->next;
        }
        return a;
    }
};