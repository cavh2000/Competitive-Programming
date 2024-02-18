//https://www.hackerrank.com/challenges/compare-two-linked-lists/
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head2->data != head1->data)
        return false;
    
    while(head1->next != nullptr && head2->next != nullptr){
        if(head1->data != head2->data)
            return false;
        head1 = head1->next;
        head2 = head2->next;
    }
    
    if(head1->next || head2->next)
        return false;
    
    return true;
}
