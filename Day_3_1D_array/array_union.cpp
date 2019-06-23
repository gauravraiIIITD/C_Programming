#include<iostream>
using namespace std;
int main()
{
	int i,n,temp=0;
	int a[9]={0,1,2,3,4,5,6,8,9};
	int b[6]={1,2,4,3,4,8};
	for(i=0;i<n;i++)
	{
		temp=temp^i;
	}
	for(i=0;i<9;i++)
	{
	  temp=temp^a[i];	
	}
	cout<<"missing number is :"<<temp;
}
