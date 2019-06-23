#include<iostream>
using namespace std;
int main()
{
	int i,n,x,y,a[100];
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the element of the array";
	for(i=1;i<=n;i++)
	{
	cin>>a[i];
	}
	int count=0;
	cout<<"Enter the range value";
	cin>>x>>y;
	for(i=1;i<=n;i++)
	{
	if((a[i]>=x)&&(a[i]<=y))
	{
		count++;
	}
	}
	cout<<"frequency will be :"<<count;
}
