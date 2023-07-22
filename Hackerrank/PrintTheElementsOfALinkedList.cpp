//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem
void printLinkedList(SinglyLinkedListNode* head) {
    if(head){
        cout<<head->data<<endl;
        printLinkedList(head->next);
    }
}
