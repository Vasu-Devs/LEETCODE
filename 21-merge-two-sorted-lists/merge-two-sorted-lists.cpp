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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* h=nullptr;
        if(!l1)
            return l2;
        if(!l2)
            return l1;

        if(l1->val<l2->val){
            h=l1;
            l1=l1->next;
        }
        else{
            h=l2;
            l2=l2->next;
        }
        ListNode* r=h;
        while(l1 && l2){
            if(l1->val<l2->val){
                h->next=l1;
                l1=l1->next;
            }
            else{
                h->next=l2;
                l2=l2->next;
            }
            h=h->next;
        }
        if(l1)
            h->next=l1;
        if(l2)
            h->next=l2;
        return r;       
    }
};