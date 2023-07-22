//https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(!head1 && !head2)
        return nullptr;
    if(!head1)
        return head2;   
    if(!head2)
        return head1;
        
    if(head1->data>head2->data)
        swap(head1,head2);        
    SinglyLinkedListNode *head = head1;
    SinglyLinkedListNode *node;
    
    while(head1 && head2){
        while(head1 && head1->data<=head2->data){
            node=head1;
            head1=head1->next;
        }
        node->next=head2;
        swap(head1,head2);
    }
    
    return head;
}
