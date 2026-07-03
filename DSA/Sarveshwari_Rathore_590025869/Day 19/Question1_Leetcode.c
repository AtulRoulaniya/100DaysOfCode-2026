struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *temp = head;
    struct ListNode *del = NULL; 
    if(head == NULL || head -> next == NULL){
        return head;
    }
    while(temp != NULL && temp -> next != NULL){
        del = temp -> next;
        if(temp -> val == del -> val){
            temp -> next = del -> next;
            free(del);
        } else {
             temp = temp -> next;
        }
    } 
    return head;
}