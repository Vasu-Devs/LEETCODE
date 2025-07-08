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
    bool isPalindrome(ListNode* head) {
        string o;
        while(head){
            o+=('0'+head->val);
            head=head->next;
        }

        string r=o;
        reverse(o.begin(),o.end());
        cout<<o<<" "<<r;
        if(r==o)
            return true;
        return false;
    }
};