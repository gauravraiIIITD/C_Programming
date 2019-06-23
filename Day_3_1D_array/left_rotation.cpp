#include<iostream>
using namespace std;
int main()
{
	int i,d,j,n=5,temp;
	int a[5]={2,5,-1,3,6};
		cin>>d;
		for(j=1;j<=d;j++)
		{
		temp=a[0];
		for(i=0;i<n-1;i++)
		{
		a[i]=a[i+1];	
	    }
	   a[n-1]=temp;
		}
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		
}
