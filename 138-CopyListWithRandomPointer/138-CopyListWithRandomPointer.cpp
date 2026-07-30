// Last updated: 31/07/2026, 02:45:06
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
        if(head == nullptr){
            return nullptr;
        }

        unordered_map<Node* , Node*> map;
        Node* curr = head;
        while(curr != nullptr){
            Node* temp = new Node(curr->val);
            map[curr] = temp;
            curr = curr->next;
        }

        curr = head;

        while(curr != nullptr){
            Node* copy = map[curr];

            copy->next = map[curr->next];
            copy->random = map[curr->random];
            curr= curr->next; 
        }

        return map[head];
    }
};
