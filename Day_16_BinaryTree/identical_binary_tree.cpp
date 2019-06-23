#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h>  
struct node{  
    int data;  
    struct node *left;  
    struct node *right;  
};  
     
struct node *rootTree1 = NULL;   
struct node *rootTree2 = NULL;  
      
struct node* createNode(int data){  
 
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
 
    newNode->data= data;  
    newNode->left = NULL;  
    newNode->right = NULL;  
      
    return newNode;  
}  
bool areIdenticalTrees(struct node *root1, struct node *root2) {  
        
    if(root1 == NULL && root2 == NULL)  
          return true;  
      
    if(root1 == NULL && root2 == NULL)  
          return true;  
       
    if(root1 != NULL  && root2 != NULL) {  
            
          return ((root1->data == root2->data) &&  
                  (areIdenticalTrees(root1->left, root2->left)) &&  
                  (areIdenticalTrees(root1->right, root2->right)));  
    }  
    return false;  
}  
        
   
int main()  
{  
    rootTree1 = createNode(1);  
    rootTree1->left = createNode(2);  
    rootTree1->right = createNode(3);  
    rootTree1->left->left = createNode(4);  
    rootTree1->right->left = createNode(5);  
    rootTree1->right->right = createNode(6);  
    
    rootTree2 = createNode(1);  
    rootTree2->left = createNode(2);  
    rootTree2->right = createNode(3);  
    rootTree2->left->left = createNode(4);  
    rootTree2->right->left = createNode(5);  
    rootTree2->right->right = createNode(6);    
        
    if(areIdenticalTrees(rootTree1, rootTree2))  
        printf("Both the binary trees are identical");  
    else  
        printf("Both the binary trees are not identical");  
   
    return 0;  
}  
