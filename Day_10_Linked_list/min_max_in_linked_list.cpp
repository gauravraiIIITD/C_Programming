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
void minNode() {  
    struct node *current = head;  
    int min;  
      
    if(head == NULL) {  
        printf("List is empty \n");  
    }  
    else {   
        min = head->data;  
          
        while(current != NULL){   
             if(min > current->data) {  
                 min = current->data;  
             }  
             current= current->next;  
        }          
        printf("Minimum value node in the list: %d\n", min);  
    }  
}  
void maxNode() {  
    struct node *current = head;  
    int max;  
      
    if(head == NULL) {  
        printf("List is empty \n");  
    }  
    else {   
        max = head->data;  
          
        while(current != NULL){   
             if(max < current->data) {  
                 max = current->data;  
             }  
             current = current->next;  
        }               
        printf("Maximum value node in the list: %d\n", max);  
    }  
}  
      
int main()  
{   
    addNode(5);  
    addNode(8);  
    addNode(1);  
    addNode(6);  
   
    minNode();  
       
    maxNode();  
          
    return 0;  
}  
