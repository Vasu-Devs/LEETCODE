/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;

        Node* curr=head;
        while(curr){
             Node* newNode = new Node(curr->val);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }
        curr=head;
        while(curr){
            if(curr->random)
                curr->next->random=curr->random->next;
            curr=curr->next->next;    
        }

        Node* dummy=new Node(0);
        Node* copy=dummy;
        curr=head;
        while(curr){
          copy->next = curr->next;
            copy = copy->next;
            curr->next = curr->next->next; 
            curr = curr->next;
        }
        return dummy->next;

    }
};