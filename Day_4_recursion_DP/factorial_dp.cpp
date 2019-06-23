#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,n,a[100];
	cout<<"Enter a number";
	cin>>n;
	a[0]=1;
	for(i=1;i<=n;i++)
	{
	a[i]=i*a[i-1];
	}
	cout<<a[n];
}
