//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *tail = new SinglyLinkedListNode(data);
    tail->data = data;
    tail->next = nullptr;
    
    if(!head)
        head = tail;
    else{
        SinglyLinkedListNode *temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
    
        temp->next = tail;
    }
    
    return head;
}
