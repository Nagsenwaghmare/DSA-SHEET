#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };





///  recursive solution


   ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;
        ListNode k(0);
        ListNode *t = &k;
        map<int,int>mp;
        vector<int>res;
        while(temp){
            res.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<res.size();i++){
            mp[res[i]]++;
        }
        vector<int>v;
        for(int i=0;i<res.size();i++){
            if(mp[res[i]]==1)v.push_back(res[i]);
        }
        for(int i=0;i<v.size();i++){
            ListNode *s = new ListNode(v[i]);
            t->next=s;
            t=t->next;
        }
        return k.next;
    }






