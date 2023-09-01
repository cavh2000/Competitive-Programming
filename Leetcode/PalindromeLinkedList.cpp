//https://leetcode.com/problems/palindrome-linked-list/
class Solution {
public:
    
    bool isPalindrome(ListNode* head) {
        if(!head->next)
            return true;
        
        bool ban = true;
        ListNode* a = head;
        ListNode* b = head;
        
        while(b->next && b->next->next){
            b = b->next->next;
            a = a->next;
        }
        
        a->next = reverseList(a->next);
        a = a->next;
        
        while(a){
            if(a->val != head->val){
                ban = false;
                break;
            }
            head = head->next;
            a = a->next;
                
        }
        
        return ban;
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode* p = nullptr;
        ListNode* n = nullptr;

        while(head){
            n = head->next;
            head->next = p;
            p = head;
            head = n;
        }
        
        return p;
    }
};
