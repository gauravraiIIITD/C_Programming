#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int i,j,m,n,a[100][100];
 cout<<"Enter the size of the matrix :";
 cin>>m>>n;
 cout<<"Enter the element of the matrix :";
 for(i=0;i<m;i++){
 	for(j=0;j<n;j++){
 		cin>>a[i][j];
	 }
 }
 cout<<"The principle diagonal element will be :";
 for(i=0;i<m;i++)
 {
   cout<<a[i][i]<<" ";	
 }
 cout<<endl;

  for(i=0;i<m;i++)
 {
   cout<<a[i][n-1-i]<<" ";	
 }
 
}

