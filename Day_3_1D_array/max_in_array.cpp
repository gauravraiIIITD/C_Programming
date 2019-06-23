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
	for(i=1;i<=n-1;i++)
	{
	  if(a[i]<=a[i+1])
	  {
	  	a[i]=a[i+1];
	  	
	  }	
	  else
	  {
	  	a[i+1]++;
	  }
	}
	cout<<"Max value will be :"<<a[i];
}
