#include<bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>res;
        ListNode * prev = head;
        ListNode * curr = head->next;
        int i=1;
        while(curr->next!=nullptr){
            if((curr->val>prev->val && curr->val>curr->next->val)||(curr->val<prev->val && curr->val<curr->next->val)){
               res.push_back(i); 
            }
            i++;
            prev = curr;
            curr = curr->next;
        }
        if(res.size()<2)return {-1,-1};
        else if(res.size()==2) return {abs(res[1]-res[0]),abs(res[1]-res[0])};
        sort(res.begin(),res.end());
        int n = res.size();
        int mini = INT_MAX;
        for(int i=1;i<n;i++){
            mini = min(mini,res[i]-res[i-1]);
        }
        return {mini,res[n-1]-res[0]};
    }