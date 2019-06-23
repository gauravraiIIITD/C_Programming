#include<stdio.h>  
#include<stdlib.h>  
     
struct node{  
    int data;  
    struct node *next;  
};      
    
struct node *head, *tail = NULL;  
int size = 0;  
   
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
struct node* reverseList(struct node *temp){  
    struct node *current = temp;  
    struct node *prevNode = NULL, *nextNode = NULL;  
      
    while(current != NULL){  
        nextNode = current->next;  
        current->next = prevNode;  
        prevNode = current;  
        current = nextNode;  
    }  
    return prevNode;  
}  
   
void isPalindrome(){  
    struct node *current = head;  
    bool flag = true;  
    int mid = (size%2 == 0)? (size/2) : ((size+1)/2);  
       
    for(int i=1; i<mid; i++){  
        current = current->next;  
    }  
      
    struct node *revHead = reverseList(current->next);  
     
    while(head != NULL && revHead != NULL){  
        if(head->data != revHead->data){  
            flag = false;  
            break;  
        }  
        head = head->next;  
        revHead = revHead->next;  
    }  
   
    if(flag)  
        printf("Given singly linked list is a palindrome\n");  
    else  
        printf("Given singly linked list is not a palindrome\n");  
}  
      
void display() {  
    struct node *current = head;  
      
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes of singly linked list: \n");  
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
    addNode(2);  
    addNode(1);  
      
    display();   
    isPalindrome();  
      
    return 0;  
}  
