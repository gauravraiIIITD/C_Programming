#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m,n,i,j,a[50][50];
	int sum;
	int temp=0;
	cout<<"Enter the size of the matrix";
	cin>>m>>n;
	printf("Enter elements of matrix : \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
          cin>>a[i][j];
        }
    }
    for(i=0; i<m; i++)
    {
        sum = 0;
        for(j=0; j<n; j++)
        {
            sum += a[j][i];
        }
        if(sum>temp)
        {
          temp=sum;
		}
    }
    cout<<"maximum sum in column will be :"<<temp;
    return 0;
}
