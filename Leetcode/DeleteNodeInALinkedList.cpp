https://leetcode.com/problems/delete-node-in-a-linked-list/
class Solution {
public:
    void deleteNode(ListNode* node) {
        while(node->next && node->next->next){
            swap(node->val,node->next->val);
            node=node->next;
        }
        swap(node->val,node->next->val);
        node->next=NULL;
        
    }
};
