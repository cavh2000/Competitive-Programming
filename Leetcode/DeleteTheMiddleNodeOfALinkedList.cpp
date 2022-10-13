//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next)
            return nullptr;
        
        ListNode* slowPointer=head;
        ListNode* fastPointer=head;
        ListNode* previousPointer;
        
        while(fastPointer->next && fastPointer->next->next){
            previousPointer=slowPointer;
            slowPointer=slowPointer->next;
            fastPointer=fastPointer->next->next;
        }
        
        if(fastPointer->next)
            slowPointer->next=(slowPointer->next->next) ? slowPointer->next->next : nullptr;
        else
            previousPointer->next=(slowPointer->next) ? slowPointer->next : nullptr;
        
        return head;
    }
};
