/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * root  = head;
        map<ListNode *,int>mp;
        while(root!=NULL){
            if(mp.find(root)!=mp.end())return true;
            mp[root]++;
            root = root->next;
        }
        return false;
    }
};