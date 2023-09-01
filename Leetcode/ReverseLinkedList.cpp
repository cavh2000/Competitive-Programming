//https://leetcode.com/problems/reverse-linked-list/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* a = nullptr;
        ListNode* b = head;
        ListNode* c = nullptr;
        
        while(b){
            (b->next) ? c = b->next : c = nullptr;
            b->next = a;
            a = b;
            b = c;
        }
        
        return a;
    }
};
