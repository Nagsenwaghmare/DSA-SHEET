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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp = head;
        vector<int>res;
        while(temp!=NULL){
            res.push_back(temp->val);
            temp = temp->next;
        }
        // int elem = res[n-2+1];;
        ListNode * root = new ListNode(0);
        ListNode * s = root;
        for(int i=0;i<res.size();i++){
            if(i!=(res.size()-n)){
                root->next = new ListNode(res[i]);
                root=root->next;   
            }
        }
        return s->next;
    }
};