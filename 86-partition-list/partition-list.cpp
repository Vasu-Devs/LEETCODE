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
    ListNode* partition(ListNode* head, int x) {
        if(!head) return head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* slow=dummy;
        ListNode* fast=dummy;

        while(slow->next && slow->next->val<x){
            slow=slow->next;
            fast=fast->next;
        }
        while(fast && fast->next){
            if(fast->next->val<x){
                ListNode* temp=slow->next;
                slow->next=fast->next;
                fast->next=fast->next->next;
                slow->next->next=temp;
                slow=slow->next;
            }
            if(fast->next && fast->next->val>=x)
            fast=fast->next;
        }

        return dummy->next;
    }
};