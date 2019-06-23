#include<stdio.h>  
#include<stdlib.h>
struct node{  
    int data;  
    struct node *next;  
};      
   
struct node *head, *tail = NULL;  
     
void addAtEnd(int data) {  
   
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
        
    if(head == NULL) {   
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        tail->next = newNode;  
        tail = newNode;  
    }  
}  
        
void display() {   
    struct node *current = head;  
      
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Adding nodes to the end of the list: \n");  
    while(current != NULL) {   
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{    
    addAtEnd(1);  
    display();  
        
    addAtEnd(2);  
    display();  
       
    addAtEnd(3);  
    display();  
      
    addAtEnd(4);  
    display();  
   
    return 0;  
}  
