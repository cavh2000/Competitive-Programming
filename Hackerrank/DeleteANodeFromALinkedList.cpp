//https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/ 
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    if(position == 0){
        if(!llist->next)
            return nullptr;
        else
            return llist->next;        
    }   
    
    SinglyLinkedListNode *temp = llist;
    while(position != 1 && temp->next != nullptr){
        temp = temp->next;
        position--;
    }
    
    if(position == 1){
        if(temp->next->next)
            temp->next = temp->next->next;
        else
            temp->next = nullptr;
    }
        
    return llist;
}
