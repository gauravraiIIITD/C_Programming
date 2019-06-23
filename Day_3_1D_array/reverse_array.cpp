#include<iostream>
using namespace std;
int main()
{
	int i,n,x,y,a[100];
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the element of the array";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	cout<<"The reverse array will be :";
	for(i=n-1;i>=0;i--)
	{
	cout<<a[i]<<" ";
	}
}
