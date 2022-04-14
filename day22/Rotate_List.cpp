//https://leetcode.com/submissions/detail/680461903/

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0 || head->next == NULL)return head;
        int size=0;
        ListNode* ptr=head;
        while(ptr!=NULL){
            size++;
            ptr=ptr->next;
        }
        k = k%size;
        ptr = head;
        while(k>0){
            k-=1;
            ptr=ptr->next;
        }
        ListNode* temp=head;
        while(ptr->next!=NULL){
            temp=temp->next;
            ptr=ptr->next;
        }
        ptr->next = head;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};