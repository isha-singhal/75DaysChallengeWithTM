//https://leetcode.com/submissions/detail/680448854/

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
    ListNode *detectCycle(ListNode *head) {
        if(head ==NULL || head->next==NULL)return NULL;//there is only 1 node
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)break; //cycle found as they meet
        }
        if(fast->next==NULL || fast->next->next==NULL)return NULL;//no cycle
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return fast;//return slow; either works
    }
};