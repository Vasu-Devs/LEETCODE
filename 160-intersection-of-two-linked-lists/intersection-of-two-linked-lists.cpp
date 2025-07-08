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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        ListNode* p1=h1;
        ListNode* p2=h2;
        while(p1!=p2){
            p1=p1?p1->next:h2;
            p2=p2?p2->next:h1;
        }
        return p1;
    }
};