#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

ListNode* removeZeroSumSublists(ListNode* head) {
        int presum = 0;
        ListNode *newhead = new ListNode(0);
        newhead->next = head;
        unordered_map<int,ListNode *>mp;
        mp[0] = newhead;
        while(head!=nullptr){
            presum+=head->val;
            if(mp.find(presum)!=mp.end()){
                ListNode * prev = mp[presum];
                ListNode * start = prev;
                int newsum = presum;
                while(prev!=head){
                    prev = prev->next;
                    newsum+=prev->val;
                    if(prev!=head){
                        mp.erase(newsum);
                    }
                }
                start->next = head->next;
            }else{
                mp[presum] = head;
            }
            head = head->next;
        }
        return newhead->next;
    }