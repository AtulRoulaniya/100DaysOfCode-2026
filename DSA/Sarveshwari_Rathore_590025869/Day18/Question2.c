#include <stdio.h>
#include <stdlib.h>
struct node{
    int val;
    struct node *next;
};
struct node *deleteNthFromEnd(struct node *head, int n){
    struct node *fast = head;
    struct node *slow = head;
    for(int i = 0; i < n; i++){
        fast = fast->next;
    }
    if(fast == NULL){
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    struct node *del = slow->next;
    slow->next = del->next;
    free(del);
    return head;
}