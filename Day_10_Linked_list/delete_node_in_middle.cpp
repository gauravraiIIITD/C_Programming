#include<stdio.h>  
#include<stdlib.h>
struct node{  
    int data;  
    struct node *next;  
};      
   
int size;   
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
    size++;  
}  
     
void deleteFromMid() {  
    struct node *temp, *current;  
      
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    else {  
        int count = (size % 2 == 0) ? (size/2) : ((size+1)/2);  
            
        if( head != tail ) {    
            temp = head;  
            current = NULL;  
               
            for(int i = 0; i < count-1; i++){  
                current = temp;  
                temp = temp->next;  
            }                  
            if(current != NULL) {   
                current->next = temp->next;  
                temp = NULL;  
            }   
            else {  
                head = tail = temp->next;  
                
                temp = NULL;  
            }      
        }   
        else {  
            head = tail = NULL;  
        }  
    }  
    size--;  
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
        deleteFromMid();   
        printf("Updated List: \n");  
        display();  
    }  
          
    return 0;  
}  
