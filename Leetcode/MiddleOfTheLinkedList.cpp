//https://leetcode.com/problems/middle-of-the-linked-list/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fastPointer = head;
        ListNode* slowPointer = head;
        
        while(fastPointer->next && fastPointer->next->next){
            fastPointer = fastPointer->next->next;
            slowPointer = slowPointer->next;
        }
        
        if(fastPointer->next)
            return slowPointer->next;
        
        return slowPointer;
    }
};
