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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* curr=dummy;
        ListNode* prev=head;
        while(curr){
            if(curr->next && curr->val==curr->next->val){
                int dv=curr->val;
                while(curr && curr->val==dv){
                    curr=curr->next;
                }
                prev->next=curr;
            }else{
                prev=curr;
                curr=curr->next;
            }

        }
        return dummy->next;

    }
};