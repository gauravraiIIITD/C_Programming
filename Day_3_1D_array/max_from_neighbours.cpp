#include<iostream>
using namespace std;
int main()
{
	int i,n,x,a[100];
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the element of the array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n-1;i++)
	{
	 if((a[i]>a[i+1])&&(a[i-1]<a[i]))
	 {
	   	
	   cout<<"value will be :"<<a[i];	
	 }
	}
	cout<<"no element bigger than its neighbours";
}

