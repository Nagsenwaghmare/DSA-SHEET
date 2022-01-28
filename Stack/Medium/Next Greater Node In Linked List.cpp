#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res,stack;
        while(head!=nullptr){
            res.push_back(head->val);
            head=head->next;
        }
        for(int i=res.size()-1;i>=0;i--){
            int val = res[i];
            while(!stack.empty() && stack.back()<=res[i]){
                stack.pop_back();
            }
            res[i]=stack.empty()?0:stack.back();
            stack.push_back(val);
        }
        return res;
    }