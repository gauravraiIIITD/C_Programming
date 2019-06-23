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
	int count=0;
	for(i=0;i<n;i++)
	{
	if(a[i]!=b[i])
	count++;
	}
	cout<<"Hamming distance will be :"<<count;
	
}
