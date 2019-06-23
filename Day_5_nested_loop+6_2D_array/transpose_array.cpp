#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int i,j,m,n,a[100][100],b[100];
 int index=0;
 cout<<"Enter the size of the matrix";
 cin>>m>>n;
 cout<<"Enter the element of the matrix";
 for(i=0;i<m;i++){
 	for(j=0;j<n;j++){
 		cin>>a[i][j];
	 }
 }
  for(i=0;i<m;i++){
 	for(j=0;j<n;j++){
 		cout<<a[i][j];
 		cout<<" ";
	 }
	 cout<<endl;
 }
  for(i=0;i<m;i++){
 	for(j=0;j<n;j++){
 		b[index]=a[i][j];
 		index++;
	 }
 }
 cout<<"array will be :";
     for(index=0;index<(m*n);index++)
	 {
 		cout<<b[index];
 		cout<<" ";
     }
}
