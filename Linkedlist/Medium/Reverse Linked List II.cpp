#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };



  class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int pos = 1;
        vector<int> res;
        ListNode *tmp = head;
        while(tmp!=NULL){
            res.push_back(tmp->val);
            tmp = tmp->next;
        }
        ListNode * temp = new ListNode(0);
        ListNode *k = temp;
        stack<int>s;
        for(int i=0;i<res.size();i++){
            if(i+1>=left && i+1<=right){
                s.push(res[i]);
            }
        }
        for(int i=0;i<res.size();i++){
            int sz = s.size();
            if(i+1==left){
               while(!s.empty()){
                   ListNode *l = new ListNode(s.top());
                   temp->next = l;
                   s.pop();
                   temp=temp->next;
               }
                i+=sz-1;
            }else{
                ListNode *l = new ListNode(res[i]);
                temp->next  = l;
                temp = temp->next;
            }
        }
        ListNode *rs = k->next;
        delete(k);
        return rs;
        
    }
};