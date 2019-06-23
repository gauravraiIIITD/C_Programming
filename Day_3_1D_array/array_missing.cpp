#include<iostream>
using namespace std;
int main()
{
	int i,n,temp=0;
	int a[9]={0,1,2,3,4,5,6,8,9};
	for(i=0;i<10;i++)
	{
		temp=temp^i;
	}
	for(i=0;i<9;i++)
	{
	  temp=temp^a[i];	
	}
	cout<<"missing number is :"<<temp;
}
