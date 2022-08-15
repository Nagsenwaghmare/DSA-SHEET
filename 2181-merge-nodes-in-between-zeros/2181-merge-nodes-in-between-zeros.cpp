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
    ListNode* mergeNodes(ListNode* head) {
        vector<int>res,result;
        ListNode * newhead = head;
        while(newhead!=nullptr){
            res.push_back(newhead->val);
            newhead = newhead->next;
        }
        
        int sum=0;
        int i=1;
        int n = res.size();
        while((i<n)){
            if(res[i]==0){
                result.push_back(sum);
                sum=0;
            }
            sum+=res[i];
            i++;
        }
        ListNode * root;
        ListNode *   temp = new ListNode(0);
        root = temp;
        for(auto i:result){
            
            ListNode * t = new ListNode(i);
            temp->next = t;
            temp = temp->next;
        }
        return root->next ;
    }
};