//https://leetcode.com/problems/swap-nodes-in-pairs/
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head)
            return head;
        if(!head->next)
            return head;
        
        ListNode* pointer1 = head;
        ListNode* pointer2 = head->next;
        ListNode* pointer3 = pointer2->next;
        head = pointer2;
        
        while(pointer2){
            pointer2->next = pointer1;
            pointer1->next = (!pointer3) ? nullptr : (pointer3->next) ? pointer3->next : pointer3;
            pointer1 = pointer3;
            pointer2 = (!pointer3) ? nullptr : (pointer3->next) ? pointer3->next : nullptr;
            if(pointer3)
                pointer3 = (!pointer2) ? nullptr : (pointer2->next) ? pointer2->next : nullptr;
        }
        
        return head;
    }
};
