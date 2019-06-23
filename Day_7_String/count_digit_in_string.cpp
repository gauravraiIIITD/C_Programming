#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,n,count;
	char c[50];
	char col;
	cout<<"Enter the length of the string : ";
	cin>>n;
	cout<<"Enter the string : ";
	for(i=0;i<n;i++)
	{
	  cin>>c[i];
	}
	count=0;
	for(i=0;i<n;i++)
	{
		if((c[i]>='0')&&(c[i]<='9'))
		{
		count++;
	    }
	}
	cout<<"Number of digits will be : "<<count;
}

