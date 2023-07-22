//https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *ans = llist;
    
    for(int i=1;i<position;i++)
        llist=llist->next;
    
    node->next=llist->next;
    llist->next=node;
    
    return ans;
}
