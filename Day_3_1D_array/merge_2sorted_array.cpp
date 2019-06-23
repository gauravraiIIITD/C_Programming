#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,k=0;
	int m=4,n=5,c[100];
	int a[4]={1,5,9,10};
	int b[5]={3,8,11,14,16};
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	while(i<m)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<n)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	for(i=0;i<k;i++)
	{
		cout<<c[i]<<" ";
	}
}
