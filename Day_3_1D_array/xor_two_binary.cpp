#include<iostream>
using namespace std;
int main()
{
	int i,n,x,y,a[100],b[100];
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the element of the array";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	cout<<"Enter the element of the array";
	for(i=0;i<n;i++)
	{
	cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
	x=a[i]^b[i];
	cout<<x<<" ";
	}
	
}
