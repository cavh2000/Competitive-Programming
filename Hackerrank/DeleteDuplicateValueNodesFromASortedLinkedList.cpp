//https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    if(!llist)
        return nullptr;
    
    SinglyLinkedListNode *node = removeDuplicates(llist->next);
    llist->next=node;
    
    if(node && node->data == llist->data){
        free(llist);
        return node;
    }
        
    return llist;
}
