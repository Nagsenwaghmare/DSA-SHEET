#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


  int pairSum(ListNode* head) {
        vector<int>res;
        ListNode * k = head;
        int maxtsum = INT_MIN;
        while(k!=nullptr){
            res.push_back(k->val);
            k = k->next;
        }
        int n= res.size();
        for(int i=0;i<=(n/2)-1;i++){
            int sum = res[i]+res[n-i-1];
            maxtsum = max(maxtsum,sum);
        }
        return maxtsum;
    }


    