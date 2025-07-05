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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0,s=0;
        ListNode* l3=new ListNode(0);
        ListNode* t=l3;
        while(l1 && l2){
            s=l1->val + l2->val +c;
            t->next=new ListNode(s%10);
            t=t->next;
            c=s/10;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1){
            while(l1){
            s=l1->val+c;
            t->next=new ListNode(s%10);
            t=t->next;
            c=s/10;

            l1=l1->next;
            }
            if(c!=0)
                t->next=new ListNode(c);
        }
        if(l2){
            while(l2){
            s=l2->val+c;
            t->next=new ListNode(s%10);
            t=t->next;
        
            c=s/10;
            l2=l2->next;}
            if(c!=0)
                t->next=new ListNode(c);
        }
            if(c!=0)
                t->next=new ListNode(c);

        return l3->next;
    }
};