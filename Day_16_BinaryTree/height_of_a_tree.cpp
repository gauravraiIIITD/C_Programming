#include<iostream>
#include<math.h>
int count=0,counter=0;
using namespace std;
int height(int *);
class node{
	public:
		int data;
		node *left,*right;
};
int main()
{
  node *root;
  root=new node();
  root->data=5;
  node *temp;
  temp=new node();
  temp->data=15;
  root->left=temp;
  node *temp1;
  temp1=new node();
  temp1->data=20;
  root->right=temp1;
  node *temp2;
  temp2=new node();
  temp2->data=30;
  root->right->right=temp2;
  cout<<root->data<<" ";
  cout<<root->left->data<<" ";
  cout<<root->right->right->data;
  int height(node *root);
}
  int height(node *root)
  {
  	if(root->left)
  	{
  		count++;
	  }
	  if(root->right)
  	{
  		counter++;
	  }
  	if(root==NULL)
  	return 0;
  	return max(height(root->left),height(root->right));
  }
