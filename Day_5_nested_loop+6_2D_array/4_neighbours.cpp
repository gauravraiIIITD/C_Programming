#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m,n,row,col,i;
	int a[50][50];
	cout<<"Enter the size of the matrix";
	cin>>m>>n;
	if((m<4)||(n<4))
	{
    cout<<"Size will not considered";
    return 0;
	}
	printf("Enter elements of matrix : \n");
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
          cin>>a[row][col];
        }
    }
    cout<<"greater element from 4 neighbours will be :"<<endl;
    for(row=1; row<m-1; row++)
    {
        for(col=1; col<n-1; col++)
        {
        if((a[row][col])>(a[row][col-1])&&(a[row][col])>(a[row-1][col])&&(a[row][col])>(a[row+1][col])&&(a[row][col])>(a[row][col+1]))
        {
        	cout<<a[row][col]<<endl;
		}
        }
    }
    
}
