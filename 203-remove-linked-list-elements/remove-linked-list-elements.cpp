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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr=new ListNode(0);
        curr->next=head;
        ListNode* temp=curr;
        
        while(temp &&  temp->next){
            if(temp->next->val==val)
                temp->next=temp->next->next;
            else
            temp=temp->next;
        }
        return curr->next;
    }
};