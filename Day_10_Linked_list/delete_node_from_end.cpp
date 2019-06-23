#include<stdio.h>
#include<stdlib.h>  
   
struct node{  
    int data;  
    struct node *next;  
};      
    
struct node *head, *tail = NULL;  
   
void addNode(int data) {    
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
     
void deleteFromEnd() {  
       
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    else {   
        if(head != tail ) {  
            struct node *current = head;   
            while(current->next != tail) {  
                current = current->next;  
            }  
            tail = current;  
            tail->next = NULL;  
        }   
        else {  
            head = tail = NULL;  
        }  
    }  
}  
       
void display() {  
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(current != NULL) {    
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{    
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
       
    printf("Original List: \n");  
    display();  
      
    while(head != NULL) {  
        deleteFromEnd();    
        printf("Updated List: \n");  
        display();  
    }  
          
    return 0;  
}  
