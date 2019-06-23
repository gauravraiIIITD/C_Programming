#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m,n,i,j,b,c,a[50][50];
	int sum;
	int temp=0;
	int count=0;
	int value=0,col;
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
        c=0;
        for(j=0; j<n; j++)
        {
            b= a[j][i];
            if(b==1)
            {
            c++;
			}
		if(c>temp)
        {
        temp=c;
		col=i;
		}
        }
        cout<<"Number of 1's will be repectively :"<<c<<endl;
        if(c>count)
		{
          count=c;	
		}		
    }
    
    cout<<col;
}
   
