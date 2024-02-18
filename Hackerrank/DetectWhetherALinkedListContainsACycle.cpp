//https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/
bool has_cycle(SinglyLinkedListNode* head) {
    if(head && head->next){
        SinglyLinkedListNode *slow = head;
        SinglyLinkedListNode *fast = head;
        
        while(slow->next && (fast->next && fast->next->next)){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                return true;
        }
    }
    
    return false;
}
