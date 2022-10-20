//https://leetcode.com/problems/odd-even-linked-list/
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return nullptr;
        if(!head->next)
            return head;
        
        ListNode* oddHead = head->next;
        ListNode* p = head;
        ListNode* q = head->next;
        
        while(q->next){
            p->next = q->next;
            p = p->next;
            if(p->next){
                q->next = p->next;
                q = q->next;
            }else
                q->next=nullptr;
        }
        
        p->next = oddHead;
        
        return head;
    }
};
