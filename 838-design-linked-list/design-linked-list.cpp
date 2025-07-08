class MyLinkedList {
struct Node{
    int val;
    Node* next;
    Node(int val) : val(val), next(nullptr) {}
};
        Node* head;
        int n;
public:
    MyLinkedList() {
        head=nullptr;
        n=0;
    }
    
    int get(int index) {
        if(index<0 || index>=n)   return -1;
        Node* temp=head;
        int i=0;
        while(i<index){
            temp=temp->next;
            i++;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        n++;
        Node* newNode= new Node(val); 
        newNode->next=head;
        head=newNode;
    }
    
    void addAtTail(int val) {
        n++;
        Node* newNode= new Node(val);
        if(!head){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index>n || index<0) return;
        Node* newNode=new Node(val);
        Node* temp=head;
        if (index == 0) {
        addAtHead(val);
        return;
    }

        int i=1;
        while(i<index){
            temp=temp->next;
            i++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        n++;
        
    }
    
    void deleteAtIndex(int index) {
        
        if(index>=n || index<0) return;
        n--;
        if(index==0){
            head=head->next;
            return;
        }
        Node* temp=head;
        int i=1;
        while(i<index){
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;

    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */