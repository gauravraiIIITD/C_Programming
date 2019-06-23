#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int i,j,m,k,n,a[50][50],b[100];
 int index;
 cin>>n>>m;
 cout<<"Enter the element of the array";
 for(i=0;i<(n*m);i++)
 {
 	cin>>b[i];
 }
 for(i=0;i<(n*m);i++)
 {
 	cout<<b[i];
 	cout<<" ";
 }
 cout<<"Enter the size of matrix in which we have to change";
 cin>>n>>m;
 for(index=0;index<(n*m);index++){
 	i=index/m;
 	j=index%m;
 	a[i][j]=b[index];
 }
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
 	 cout<<a[i][j]<<" ";
 }
 cout<<endl;
}
}
