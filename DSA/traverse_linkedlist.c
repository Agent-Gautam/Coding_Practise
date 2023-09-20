#include <stdio.h>

struct node
{
    int data;
    struct node *next;
}*start;
void insert();
void display();
void removeDuplicates(struct Node* head)
{
    int next;
    while(head != NULL && head->next != NULL){
        next = head->next->data;
        if(head->data == next){
            head->next = head->next->next;
        }
        else{
            head = head->next;
        }
    }
    
    
}

