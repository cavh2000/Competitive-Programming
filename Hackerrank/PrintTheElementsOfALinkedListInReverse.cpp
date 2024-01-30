//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/
void reversePrint(SinglyLinkedListNode* llist) {
    if(llist){
        reversePrint(llist->next);
        cout<<llist->data<<endl;
    } 
    return;
}
