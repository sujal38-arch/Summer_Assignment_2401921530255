ListNode* deleteNode(ListNode* head, int position){
    if(position == 0){
        return head = head -> next;
    }
    ListNode* prev = head;
    for(int i = 0; i < position - 1; i++){
        prev = prev -> next;
    }
    prev -> next = prev -> next -> next;
    return head;
}
ListNode* removeNthFromEnd(ListNode* head, int n){
    ListNode* curr = head;
    int count = 0;
    while(curr != NULL){
        curr = curr -> next;
        count ++;
    }
    int pos = count - n;
    return deleteNode(head, pos);
}