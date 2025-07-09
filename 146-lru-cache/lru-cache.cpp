struct Node{
    int key;
    int val;
    Node* next;
    Node* prev;
    Node(int k, int v) : key(k), val(v), next(nullptr), prev(nullptr) {}
};
class LRUCache {
private:
    Node* head;
    Node* tail;
    int capacity,n=0;

    unordered_map<int,Node*> cache;

    void remove(Node* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }

    void insertBeg(Node* node){
        node->next=head->next;
        node->prev=head;
        node->next->prev=node;
        head->next=node;
    }
public:
    
    LRUCache(int capacity) {
        this->capacity=capacity;
        head=new Node(0,0);
        tail=new Node(0,0);
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(cache.find(key)==cache.end())    return -1;
        Node* node=cache[key];
        remove(node);
        insertBeg(node);
        return node->val;
        
    }
    
    void put(int key, int value) {
        if(cache.find(key)==cache.end()){
            if(n>=capacity){
            Node* lru=tail->prev;
            remove(lru);
            cache.erase(lru->key);
            n--;
            }
            Node* node=new Node(key,value);
            insertBeg(node);
            cache[key]=node;
            n++;
        }
        else{
            Node* node=cache[key];
            node->val=value;
            remove(node);
            insertBeg(node);
           
        }
        
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */