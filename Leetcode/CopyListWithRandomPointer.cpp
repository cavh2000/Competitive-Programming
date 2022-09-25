//https://leetcode.com/problems/copy-list-with-random-pointer/
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
        if(!head)
            return nullptr;
        
        Node* curr=head;
        Node* dummy;
        while(curr){
            dummy = new Node(curr->val);
            dummy->next = curr->next;
            curr->next=dummy;
            curr=dummy->next;
        }
        curr=head;

        while(curr){
            dummy=curr->next;
            if(curr->random)
                dummy->random=curr->random->next;
            curr=dummy->next;
        }
        
        Node* newHead=head->next;
        curr=head;
        while(curr){
            dummy=curr->next;
            if(curr->next)
                curr->next=dummy->next;
            curr=dummy;
        }
        
        return newHead;
    }
};
