//https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *newhead = new SinglyLinkedListNode(data);
    newhead->data = data;
    newhead->next = llist;
    
    return newhead;
}
