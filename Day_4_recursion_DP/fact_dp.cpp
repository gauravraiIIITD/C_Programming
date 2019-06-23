#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,n,a[100];
	cout<<"Enter a number";
	cin>>n;
	a[0]=0;
	a[1]=1;
	for(i=2;i<=n;i++)
	{
	a[i]=a[i-1]+a[i-2];	
	}
	cout<<a[n];
}

