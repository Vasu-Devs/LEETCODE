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
    ListNode* s=head;
    while(s && s->next){
        if(s->val==s->next->val)
            s->next=s->next->next;
        else
        s=s->next;
    }
    // s->next=nullptr;
        return head;

    }
};