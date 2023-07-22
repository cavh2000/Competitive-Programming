//https://www.hackerrank.com/challenges/reverse-a-linked-list/problem
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    vector<SinglyLinkedListNode *> v;

    while(llist){
        v.push_back(llist);
        llist=llist->next;
    }
    
    for(int i=v.size()-1;i>0;i--){
        v[i]->next=v[i-1];
    }
    v[0]->next=nullptr;
    
    return v[v.size()-1];
}
