#include<iostream>
#include<string.h>
using namespace std;
int rev(int a[],int i,int j)
{
	int temp;
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		rev(a,i+1,j-1);
	}
	
}
int main()
{
	int i,j,n,a[100];
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the elements of the array :";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
    }
	rev(a,0,j-1);
	cout<<"Reverse of the array will be :";
	for(i=n-1;i>=0;i--)
	{
	cout<<a[i];
    }
	return 0;
}

