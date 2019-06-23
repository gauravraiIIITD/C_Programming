#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h>  
   
struct node{  
    int data;  
    struct node *left;  
    struct node *right;  
};  
    
struct node *root = NULL;  
      
static int level = 0;  
      
struct node* createNode(int data){  

    struct node *newNode = (struct node*)malloc(sizeof(struct node));  

    newNode->data= data;  
    newNode->left = NULL;  
    newNode->right = NULL;  
      
    return newNode;  
}  
bool isSameLevel(struct node *temp, int currentLevel ) {  
       
    if(root == NULL){  
        printf("Tree is empty\n");  
        return true;  
    }  
    else { 
        if(temp == NULL)  
            return true;  
   
        if(temp->left == NULL && temp->right == NULL) {   
            if(level == 0) {  
                level = currentLevel ;  
                return true;  
            }    
            else   
               return (level == currentLevel) ;  
         }  
        return  (isSameLevel(temp->left, currentLevel + 1) && isSameLevel(temp->right, currentLevel + 1)) ;  
     }  
}  
   
int main()  
{  
    root = createNode(1);  
    root->left = createNode(2);  
    root->right = createNode(3);  
    root->left->left = createNode(4);  
    root->right->left = createNode(5);  
    root->right->right = createNode(6);  
      
    if(isSameLevel(root, 1))   
        printf("All leaves are at same level");  
    else  
        printf("All leaves are not at same level");  
   
    return 0;  
}  
