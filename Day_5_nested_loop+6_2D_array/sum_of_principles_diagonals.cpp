#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int i,j,m,n,a[100][100];
 int sum1=0;
 int sum2=0;
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
   sum1=sum1+a[i][i];
 }
 cout<<endl;
 cout<<sum1;
  for(i=0;i<m;i++)
 {
   sum2=sum2+a[i][n-1-i];	
 }
 cout<<endl;
 cout<<sum2;
 
}

