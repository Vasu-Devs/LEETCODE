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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> td(nums.begin(),nums.end());
        ListNode* d=new ListNode(0);
        d->next=head;
       
        ListNode* curr=d->next;
        ListNode* prev=d;
        while(curr){
            if(td.count(curr->val))
                prev->next=curr->next;
            else
                prev=curr;
            curr=curr->next;
        }
        return d->next;
    }
};