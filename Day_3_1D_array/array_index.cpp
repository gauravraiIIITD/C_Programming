#include<iostream>
using namespace std;
int main()
{
	int i,n,x,a[100];
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the element of the array";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the number which index is to find :";
	cin>>x;
	cout<<"the number will be at index :";
	for(i=1;i<=n;i++)
	{
		if(a[i]==x)
		{
			cout<<i;
			return 1;
		}
	}
}
