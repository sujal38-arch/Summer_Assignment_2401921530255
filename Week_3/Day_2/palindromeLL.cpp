bool isPalindrome(ListNode* head){
    if(head == NULL || head -> next == NULL){
        return true;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = NULL;
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        ListNode* temp = slow -> next;
        slow -> next = prev;
        prev = slow;
        slow = temp;
    }
    if(fast != NULL){
        slow = slow -> next;
    }
    while(prev != NULL && slow != NULL){
        if(prev -> val != slow -> val){
            return false;
        }
        prev = prev -> next;
        slow = slow -> next;
    }
    return true;
}