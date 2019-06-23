#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m,n,row,col,i,a[50][50];
	cout<<"Enter the size of the matrix";
	cin>>m>>n;
	printf("Enter elements of matrix : \n");
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
          cin>>a[row][col];
        }
    }
    cout<<"Even element are :";
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
         if((a[row][col])%2==0)
         {
           cout<<a[row][col];
		 }
        }
    }
    cout<<endl;
    cout<<"Odd elements are :";
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
         if((a[row][col])%2!=0)
         {
           cout<<a[row][col];
		 }
        }
    }
    
}
