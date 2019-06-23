#include<stdio.h>  
#include<stdlib.h>  
struct Node {  
int data;  
struct Node *next;  
};  
void display(struct Node *n)  
{  
while (n != NULL)  
  {  
printf(" %d \n", n->data);  
     n = n->next;  
  }  
}  
int main()  
{  
struct Node* head = NULL;  
struct Node* second = NULL;  
struct Node* third = NULL;  
head = (struct Node*)malloc(sizeof(struct Node));   
second = (struct Node*)malloc(sizeof(struct Node));  
third = (struct Node*)malloc(sizeof(struct Node));  
head->data = 100;   
head->next = second;    
second->data = 200;     
second->next = third;  
third->data = 300;  
third->next = NULL;  
display(head);  
return 0;  
}  
