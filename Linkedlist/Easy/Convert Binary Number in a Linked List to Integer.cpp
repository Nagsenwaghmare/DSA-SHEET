
#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  

  class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int>res;
        while(head!=NULL){
            res.push_back(head->val);
            head = head->next;
        }
        int n = res.size()-1;
        int i = 0;
        int sum = 0;
        while(i<res.size()){
            sum+=res[i]*(pow(2,n--));
            i++;
        }
        return sum;
    }
};


