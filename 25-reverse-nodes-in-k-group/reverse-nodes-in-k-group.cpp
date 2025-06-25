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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* d=new ListNode(0);
        d->next=head;
        ListNode* temp1=d;
        while(1){
            ListNode* temp2=temp1->next;
            int i=k;
            while(i && temp2){
                
                temp2=temp2->next;
                i--;
            }
            if(i>0)
                    break;
            temp1=reverse(temp1,k);
        }
        return d->next;
    }
    ListNode* reverse(ListNode* head , int k){
        ListNode* p=head;
        ListNode* c=head->next;
        ListNode* n=nullptr;
        while(k){
            n=c->next;
            c->next=p;

            p=c;
            c=n;
            k--;
        }
        head->next->next=c;
        ListNode* r=head->next;
        head->next=p;
        return r;
    }
};