//https://leetcode.com/problems/remove-duplicates-from-sorted-list/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode* p1;
        ListNode* p2;
        p1=head;
        p2=p1->next;
        while(p2){
            if(p1->val==p2->val){
                while(p2 && p2->val==p1->val){
                    if(p2->next)
                        p2=p2->next;
                    else
                        p2=nullptr;
                }
                p1->next=p2;  
            }
            if(p1->next)
                p1=p1->next;
            if(p1->next)
                p2=p1->next;
            else
                p2=nullptr;
        }
        
        return head;
    }
};
