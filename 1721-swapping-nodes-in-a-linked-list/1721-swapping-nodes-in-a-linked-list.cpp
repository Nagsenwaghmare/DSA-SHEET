/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *res =head;
        vector<int>result;
        while(res!=nullptr){
            result.push_back(res->val);
            res = res->next;
        }
        int n = result.size();
        swap(result[k-1],result[n-k]);
        ListNode *temp = new ListNode(0);
        ListNode *ans= temp;
        for(int i=0;i<n;i++){
            ListNode *newnode = new ListNode(result[i]);
            temp->next = newnode;
            temp = temp->next;
        }
        return ans->next;
    }
};